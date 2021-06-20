//included library
//

//------------------------------------------------------------------------------


//pin veriable
//

int tripWirePin = 8;
int buzzerPin = 9;

//------------------------------------------------------------------------------


//defined veriable  
//

//------------------------------------------------------------------------------


//defined arrays
//

//------------------------------------------------------------------------------


//defined functions
//

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

  if(digitalRead(tripWirePin) != 0) {
    Serial.println("System Armed");
  }
  else {
    tone(buzzerPin, 650, 1000);
    Serial.println("RED ALERT! TRIPWIRE ERROR DETECTED!");
    noTone(buzzerPin);
  }

// End of main sketch / loop delay 
  delay(1);

}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
