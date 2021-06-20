//included library
//
#include <Keypad.h>

//------------------------------------------------------------------------------


//defined veriable  
//
// Define the number of rows and columns
const byte ROWS = 4;
const byte COLS = 4;

//------------------------------------------------------------------------------

//defined arrays
//

// Define the value of each cell
int tones[ROWS][COLS] = {
  {31, 93, 147, 208},
  {247, 311, 370, 440},
  {523, 587, 698, 880},
  {1397, 2637, 3729, 4978}
};

//------------------------------------------------------------------------------


//pin veriable
//

// Set pin for buzzer
int buzzer = 8;

// Set pins for keypad
byte rowPins[ROWS] = {5, 4, 3, 2};
byte colPins[COLS] = {13, 12, 7, 6};

//------------------------------------------------------------------------------


//defined functions
//

// Load cells
  Keypad customKeypadtones = Keypad(makeKeymap(tones), rowPins, colPins, ROWS, COLS);

//------------------------------------------------------------------------------

//inital sketch setup
//

void setup() {
// Start serial monitor
  Serial.begin(9600);

}


//------------------------------------------------------------------------------

//main sketch loop
//

void loop() {

// Call function for keypad lookup cell for button pushed
  int customKeytones = customKeypadtones.getKey();

// Sound buzzer value for key pressed
  if (customKeytones){
    tone(buzzer, customKeytones, 500);
    delay(500);
    noTone(buzzer);
  }

// delay loop
  delay(1);

}
