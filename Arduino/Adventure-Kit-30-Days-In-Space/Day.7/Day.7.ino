//varables
int onboardLed = 13;

int sensorPin = A0;
int sensorValue = 0;

unsigned int batteryCapacity = 50000;
unsigned int batteryLevel = 0;

void PrintBatteryPercentage() {
  Serial.print(((double)batteryLevel / (double)batteryCapacity)*100);
  Serial.println("%");
}

void setup() {
  pinMode(onboardLed, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  sensorValue = analogRead(sensorPin);
  batteryLevel += sensorValue;  // same as batteryLevel = bqatteryLevel + sensorValue

  if(batteryLevel >= batteryCapacity){
    Serial.println("Fully Charged");
    batteryLevel = batteryCapacity; // to prevent integer overflow errors
  }
  else {
    PrintBatteryPercentage();
  }

  delay(50);

}
