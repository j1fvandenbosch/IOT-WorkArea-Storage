//included library
//

#include <Arduino.h>
#include <TM1637Display.h>

//------------------------------------------------------------------------------


//pin veriable
//

// Define the connections pins:
#define CLK 6
#define DIO 5

//------------------------------------------------------------------------------


//defined veriable  
//

//------------------------------------------------------------------------------


//defined arrays
//


//------------------------------------------------------------------------------



//defined functions
//

#define TEST_DELAY 2000
TM1637Display display(CLK, DIO);

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

// Set display briughtness
  display.setBrightness(0x0f);
  uint8_t data[] = { 0x0, 0x0, 0x0, 0x0 };

// Show Segments
  display.setSegments(data);

// Display Number
  display.showNumberDec(23, false, 3, 1);

// Delay by TEST_DELAY ammount
  delay(TEST_DELAY);

// Show Segments
  display.setSegments(data);

// Display Number
display.showNumberDec(353, true, 3, 1);

// Delay by TEST_DELAY ammount
delay(TEST_DELAY);

// Show Segments
display.setSegments(data);

// Display Number
display.showNumberDec(1688, true, 4, 0);

// Delay by TEST_DELAY ammount
delay(TEST_DELAY);


// End of main sketch / loop delay 
  delay(1);

}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
