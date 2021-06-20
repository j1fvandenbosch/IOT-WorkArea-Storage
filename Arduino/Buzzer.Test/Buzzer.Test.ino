int buzzer = 10;
int i = 0;
void setup() {
  Serial.begin(9600);
  Serial.println(i);

//Code to test buzzer range
  for(int i=0; i<5000; i=i+1){
    tone(buzzer,i, 500);
    Serial.println(i);
    delay(50);
    noTone(buzzer);
  }

}

void loop() {

}
