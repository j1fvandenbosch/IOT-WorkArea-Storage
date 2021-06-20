//varables
int onboardLed = 2;

void setup() {
  Serial.begin(115200);
  pinMode(onboardLed, OUTPUT);
}

void loop() {
  digitalWrite(onboardLed, HIGH);
  Serial.print("LED on     ");
  delay(500);
  digitalWrite(onboardLed, LOW);
  Serial.println("LED off");
  delay(500);
}
