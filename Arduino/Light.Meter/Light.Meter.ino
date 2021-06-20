//included Library
//
#include <Arduino.h>
//------------------------------------------------------------------------------


//defined pins
//
//define standard LED
//deefine number of LEDs
    const int nbrLEDs = 12;
//define the pins the LEDs attach to
    const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

//define Photoresistor
//photoresistor attach to A5                        
    const int photocellPin = A5;
//------------------------------------------------------------------------------


//defined veriable  
//
//value read from the sensor
    int sensorValue = 0;

//sensor value converted into LED 'bars'
    int ledLevel = 0;
//------------------------------------------------------------------------------


//inital program setup
//
void setup() {
// Start serial monitor
    Serial.begin(9600);

//set the LED pins to outputs
    for (int led = 0; led < nbrLEDs; led++) {
        pinMode(ledPins[led], OUTPUT);
    }
}
//------------------------------------------------------------------------------


//main program loop
//
void loop() {

//read the value of A0
    sensorValue = analogRead(photocellPin);

//map to the number of LEDs
    ledLevel = map(sensorValue, 300, 1023, 0, nbrLEDs);
    for (int led = 0; led < nbrLEDs; led++) {
//When led is smaller than ledLevel, run the following code. 
      if (led < ledLevel ) {
// turn on pins less than the level
        digitalWrite(ledPins[led], HIGH);
      }
      else {
// turn off pins higher than 
        digitalWrite(ledPins[led],LOW);
      }
    }
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
