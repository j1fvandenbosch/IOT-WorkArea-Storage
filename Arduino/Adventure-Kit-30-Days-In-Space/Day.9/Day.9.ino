// PIN veriable
//
// LedRGB
int blueLight = 9;
int greenLight = 10;
int redLight = 11;

// OnBoardLed
int onboardLed = 13;

// LDR Sensor
int sensorPin = A0;

//------------------------------------------------------------------------------

// Defined veriable  
//
// Battery Info
unsigned int batteryCapacity = 50000;
unsigned int batteryLevel = 0;

// LDR Sensor
int sensorValue = 0;

//------------------------------------------------------------------------------

// Defined Functions
//
// Battery Charged Precentage
double getBatteryPercentage() {
  return (((double)batteryLevel / (double)batteryCapacity)*100);
}

// LedRGB Color Writes
void RGB_color(int red_value, int green_value, int blue_value) {
  analogWrite(blueLight, blue_value);
  analogWrite(greenLight, green_value);
  analogWrite(redLight, red_value);
  delay(500);
}

//------------------------------------------------------------------------------

//Inital Program Setup
//
void setup() {
// Start serial monitor
  Serial.begin(9600);

// Declare OnBoard Led
  pinMode(onboardLed, OUTPUT);

// Declare LedRGB pin oututs
  pinMode(blueLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(redLight, OUTPUT);
}

//------------------------------------------------------------------------------

// Main Program Loop
void loop() {
// Read Value from LDR Sensor
  sensorValue = analogRead(sensorPin);
// Add LDR Sensor value & batteryLevel and store result in batteryLevel
  batteryLevel += sensorValue;

//set loop defined veriable from getBatteryPercentage function
  double percentage = getBatteryPercentage();

// set LedRGB acording to loop defined variable percentage
  
  if (percentage >= 100) {
    RGB_color(0, 125, 0); // Green
    batteryLevel = batteryCapacity; // to prevent integer overflow errors
    percentage = 100; // to prevent from displaying over 100%
  }
  else if (percentage > 0 && percentage <= 25)
  {
    RGB_color(125, 0, 0); // red
  }
  else if (percentage > 25 && percentage <= 50){
    RGB_color(125, 80, 0); // yellow-ish
  }
  else if (percentage > 50 && percentage <= 75) {
    RGB_color(0, 125, 125); // blue-ish
  }

// print Percentage to serial monitor
  Serial.print(percentage);
  Serial.println("%");

// delay loop
  delay(100);

}
