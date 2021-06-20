// PIN veriable
//
// LDR Sensor
int sensorPin = A0;

//------------------------------------------------------------------------------

// Defined veriable  
//
// LDR Sensor
int sensorValue = 0;

int sensorInputred = 0;
int sensorInputgreen = 0;
int sensorInputblue = 0;

//------------------------------------------------------------------------------

// Defined Functions
//

//------------------------------------------------------------------------------

//Inital Program Setup
//
void setup() {
// Start serial monitor
  Serial.begin(9600);
}

//------------------------------------------------------------------------------

// Main Program Loop
void loop() {

// Read Value from LDR Sensor
  sensorValue = analogRead(sensorPin);

// Set sensorInputred from sensorPin
  sensorInputred = analogRead(sensorPin);
  delay(10);

// Set sensorInputgreen from sensorPin
  sensorInputgreen = analogRead(sensorPin);
  delay(10);

// Set sensorInputblue from sensorPin
  sensorInputblue = analogRead(sensorPin);
  delay(10);

  
// print Percentage to serial monitor
  Serial.print(sensorValue);
  Serial.print("     ");
  Serial.print(sensorInputred);
  Serial.print(" ");
  Serial.print(sensorInputgreen);
  Serial.print(" ");
  Serial.print(sensorInputblue);
  Serial.println("");


// delay loop
  delay(100);

}
