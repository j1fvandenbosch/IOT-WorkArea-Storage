//varables
  int Light = 12;
  int Switch1 = 2;

void setup() {
  pinMode(Light, OUTPUT);
  pinMode(Switch1, INPUT);
}

void loop() {
  if(digitalRead(Switch1) ==1){
    digitalWrite(Light, HIGH); // ON
  }
  else {
    digitalWrite(Light, LOW); // OFF
  }
}
