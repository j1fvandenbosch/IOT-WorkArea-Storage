//included library
//

#include "U8glib.h"
#include <TM1637Display.h>

//------------------------------------------------------------------------------


//pin veriable
//

// 7 SEG
#define CLKsev 5
#define DIOsev 4

//------------------------------------------------------------------------------


//defined veriable
//

// I2C / TWI
U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NONE);

// Define Minutes & Seconds
#define numberOfSeconds(_time_) ((_time_ / 1000) % 60)
#define numberOfMinutes(_time_) ((_time_ / 1000) / 60)

// Set a constant for the OLED Display
const uint8_t OFF[] = {0, 0, 0, 0};

// Create a 7 Segment display object, specifying parameters (Clock pin, Data pin)
TM1637Display display(5, 4);

//Define Time
// 1000ms in 1sec, 60secs in 1min, 60mins in 1hr. So, 1000x60x60 = 3600000ms = 1hr
unsigned long timeLimit = 10000;
unsigned long lastPeriodStart;

//------------------------------------------------------------------------------


//defined arrays
//

// In this library, the byte order is .GFEDCBA for the OLED Display
const uint8_t SEG_DONE[] = {
  SEG_B | SEG_C | SEG_D | SEG_E | SEG_G,           // d
  SEG_A | SEG_B | SEG_C | SEG_D | SEG_E | SEG_F,   // O
  SEG_C | SEG_E | SEG_G,                           // n
  SEG_A | SEG_D | SEG_E | SEG_F | SEG_G            // E
};

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

  // Define ___ as output
  pinMode(8, OUTPUT);

}

//------------------------------------------------------------------------------


//main sketch loop
//

void loop() {

  countdown();

  // End of main sketch / loop delay
  delay(1);

}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
