//Include Library
//
#include <Keypad.h>

//------------------------------------------------------------------------------


//defined veriable  

// Define the number of rows and columns
const byte ROWS = 4;
const byte COLS = 4;

// Define the value of each cell
char buttons[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

//------------------------------------------------------------------------------


//pin veriable
//

// Set pins for keypad
byte rowPins[ROWS] = {5, 4, 3, 2};
byte colPins[COLS] = {13, 12, 7, 6};

//------------------------------------------------------------------------------


// Defined Functions
//

// Load cells
  Keypad customKeypad = Keypad(makeKeymap(buttons), rowPins, colPins, ROWS, COLS);


//------------------------------------------------------------------------------

//Inital Program Setup
void setup() {
// Start serial monitor
  Serial.begin(9600);

}


//------------------------------------------------------------------------------

// Main Program Loop
void loop() {

// Call function for keypad lookup cell for button pushed
  char customKey = customKeypad.getKey();

// print value for key pressed
  if (customKey){
    Serial.println(customKey);
  }

// delay loop
  delay(1);

}
