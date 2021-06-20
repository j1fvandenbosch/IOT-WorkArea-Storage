//included library
//

#include "U8glib.h"
#include <TM1637Display.h>

//------------------------------------------------------------------------------


//pin variable
//

// 7 SEG
#define CLKsev 5
#define DIOsev 4

//------------------------------------------------------------------------------


//defined variable
//

// I2C / TWI
U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NONE);

// Define Minutes & Seconds
#define numberOfSeconds(_time_) ((_time_ / 1000) % 60)
#define numberOfMinutes(_time_) ((_time_ / 1000) / 60)

// Define Switches
#define ThrustersLever 8 //dip 1
#define SystemsLever 9 //dip 2
#define ConfirmLever 10 //dip 3

// Define Buzzer
#define TakeoffAnnoucementSystem 11 //buzzer

// Set a constant for the OLED Display
const uint8_t OFF[] = {0, 0, 0, 0};

// Create a 7 Segment display object, specifying parameters (Clock pin, Data pin)
TM1637Display display(5, 4);

//Define Time
// 1000ms in 1sec, 60secs in 1min, 60mins in 1hr. So, 1000x60x60 = 3600000ms = 1hr
unsigned long timeLimit = 30000;
unsigned long lastPeriodStart;
int pause = 0;
int pause2 = 0;

//------------------------------------------------------------------------------


//defined functions
//

// OLED Display output
void draw(void) {
  // graphic commands to redraw the complete screen should be placed here
  u8g.setFont(u8g_font_unifont);
  u8g.drawStr( 0, 22, "LIFTOFF!!");
}

void countdown() {
  // Calculate the time remaining
  unsigned long timeRemaining = timeLimit - millis();
  Serial.println("Countdown started..: ");

  Serial.println(timeRemaining);
  // To display the countdown in mm:ss format, separate the parts
  int seconds = numberOfSeconds(timeRemaining);
  int minutes = numberOfMinutes(timeRemaining);

  // This displays the seconds in the last two places
  display.showNumberDecEx(seconds, 0, true, 2, 2);
  // Display the minutes in the first two places, with colon
  display.showNumberDecEx(minutes, 0x40, true, 2, 0);

  // Update the time remaining
  
  timeRemaining = timeLimit - millis();
  if (timeRemaining < 50) {
    Serial.println("BREAK!!");
    u8g.firstPage();
    do {
      draw();
    } while ( u8g.nextPage() );
    while (1);
  }
}

void playBeepBoop() {
  // Play take of tone
  tone(TakeoffAnnoucementSystem, 476, 3000);
  delay(3000);
  noTone(TakeoffAnnoucementSystem);
}

//------------------------------------------------------------------------------



//inital sketch setup
//

void setup() {
  // Start serial monitor
  Serial.begin(9600);

  // flip screen, if required
  /*  u8g.setRot180();*/
  
  // Set brightness
  display.setBrightness(7);

  // Clear the display
  display.setSegments(OFF);

  // draw a blank box over the entire display to clear it
  u8g.setColorIndex(0);
  pinMode(8, OUTPUT);
  u8g.firstPage();
  do {
    u8g.drawBox(0, 0, 127, 63);
  } while( u8g.nextPage() );

  // Assign default color value
  u8g.setColorIndex(1);

  // Define Switches as outputs
  pinMode(ThrustersLever, INPUT);
  pinMode(SystemsLever, INPUT);
  pinMode(ConfirmLever, INPUT);

}

//------------------------------------------------------------------------------


//main sketch loop
//

void loop() {

  // Check status of switches
  if(digitalRead(ThrustersLever) == 1 &&
     digitalRead(SystemsLever) == 1 &&
     digitalRead(ConfirmLever) == 1) {
      pause = 1;
  }
  if(pause == 1 && pause2 == 0) {
      playBeepBoop();
      pause2 = 1;
  }
  else if(pause2 == 1) {
    countdown();
  }

  // End of main sketch / loop delay
  delay(1);

}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
