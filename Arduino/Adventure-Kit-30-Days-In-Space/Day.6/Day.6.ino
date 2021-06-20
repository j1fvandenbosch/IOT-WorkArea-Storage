//varables
int onboardLed = 13;
int sensorPin = A0;
int sensorValue = 0;

void setup() {
  pinMode(onboardLed, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  sensorValue = analogRead(sensorPin);

  digitalWrite(onboardLed, HIGH);
  delay(sensorValue);
  digitalWrite(onboardLed, LOW);
  delay(sensorValue);
  Serial.println(sensorValue);
  
}
