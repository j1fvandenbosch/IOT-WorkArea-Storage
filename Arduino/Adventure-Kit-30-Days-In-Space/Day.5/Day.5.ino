//varables
  int Light1 = 10;
  int Light2 = 11;
  int Light3 = 12;


void setup() {
  pinMode(Light1, OUTPUT);
  pinMode(Light2, OUTPUT);
  pinMode(Light3, OUTPUT);

}

void loop() {
  digitalWrite(Light1, LOW); // Light 1 ON
  digitalWrite(Light2, LOW); // Light 2 ON
  digitalWrite(Light3, LOW); // Light 3 ON

}
