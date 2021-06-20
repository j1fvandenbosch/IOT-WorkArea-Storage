//varables
  int Switch1 = 4;
  int Switch2 = 3;
  int Switch3 = 2;
  int Light1 = 10;
  int Light2 = 11;
  int Light3 = 12;


void setup() {
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
  
  pinMode(Light1, OUTPUT);
  pinMode(Light2, OUTPUT);
  pinMode(Light3, OUTPUT);

}

void loop() {
// Light 1
  if(digitalRead(Switch1) == 1){
    digitalWrite(Light1, HIGH); // Light 1 ON
  }
  else {
    digitalWrite(Light1, LOW); // Light 1 OFF
  }

// Light 2
  if(digitalRead(Switch2) == 1){
    digitalWrite(Light2, HIGH); // Light 2 ON
  }
  else {
    digitalWrite(Light2, LOW); // Light 2 OFF
  }

// Light 3
  if(digitalRead(Switch3) == 1){
    digitalWrite(Light3, HIGH); // Light 3 ON
  }
  else {
    digitalWrite(Light3, LOW); // Light 3 OFF
  }

}
