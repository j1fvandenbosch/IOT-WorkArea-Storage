void setup() {
  pinMode (0,OUTPUT);
  pinMode (1,OUTPUT);
  pinMode (2,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode (8,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (10,OUTPUT);
  pinMode (11,OUTPUT);
  pinMode (12,OUTPUT);
  pinMode (13,OUTPUT);
}

void loop() {
//pattern 1: 
  //repetition 1
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (150);
  digitalWrite (0,LOW); digitalWrite (13, LOW);digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (150);
  
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (150);
  digitalWrite (2,LOW); digitalWrite (11, LOW);digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (150);
  
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (150);
  digitalWrite (4,LOW); digitalWrite (9, LOW);digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (150);
  
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (150);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (150);
  
  //repetition 2
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (150);
  digitalWrite (0,LOW); digitalWrite (13, LOW);digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (150);
  
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (150);
  digitalWrite (2,LOW); digitalWrite (11, LOW);digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (150);
  
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (150);
  digitalWrite (4,LOW); digitalWrite (9, LOW);digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (150);
  
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (150);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (150);

  //repetition 3
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (150);
  digitalWrite (0,LOW); digitalWrite (13, LOW);digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (150);
  
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (150);
  digitalWrite (2,LOW); digitalWrite (11, LOW);digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (150);
  
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (150);
  digitalWrite (4,LOW); digitalWrite (9, LOW);digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (150);
  
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (150);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (150);
  
  //repitition 4
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (150);
  digitalWrite (0,LOW); digitalWrite (13, LOW);digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (150);
  
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (150);
  digitalWrite (2,LOW); digitalWrite (11, LOW);digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (150);
  
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (150);
  digitalWrite (4,LOW); digitalWrite (9, LOW);digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (150);
  
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (150);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (150);

//pattern 2: multiple blinking LED
   //repetition 1
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   //repetition 2
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   //repetition 3
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   //repetition 4
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300); 
   //repetition 5
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   //repetition 6
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   //repetition 7
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300); 
    
//pattern 3 
  //repetition 1
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);
  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);
  digitalWrite (8,HIGH); digitalWrite (5, HIGH);
  delay (80);
  digitalWrite (8,LOW); digitalWrite (5, LOW);
  delay (80);
  digitalWrite (10,HIGH); digitalWrite (3, HIGH);
  delay (80);
  digitalWrite (10,LOW); digitalWrite (3, LOW);
  delay (80);
  digitalWrite (12,HIGH); digitalWrite (1, HIGH);
  delay (80);
  digitalWrite (12,LOW); digitalWrite (1, LOW);
  delay (80);
  //repetition 2
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);
  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);
  digitalWrite (8,HIGH); digitalWrite (5, HIGH);
  delay (80);
  digitalWrite (8,LOW); digitalWrite (5, LOW);
  delay (80);
  digitalWrite (10,HIGH); digitalWrite (3, HIGH);
  delay (80);
  digitalWrite (10,LOW); digitalWrite (3, LOW);
  delay (80);
  digitalWrite (12,HIGH); digitalWrite (1, HIGH);
  delay (80);
  digitalWrite (12,LOW); digitalWrite (1, LOW);
  delay (80);
  //repetition 4
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);
  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);
  digitalWrite (8,HIGH); digitalWrite (5, HIGH);
  delay (80);
  digitalWrite (8,LOW); digitalWrite (5, LOW);
  delay (80);
  digitalWrite (10,HIGH); digitalWrite (3, HIGH);
  delay (80);
  digitalWrite (10,LOW); digitalWrite (3, LOW);
  delay (80);
  digitalWrite (12,HIGH); digitalWrite (1, HIGH);
  delay (80);
  digitalWrite (12,LOW); digitalWrite (1, LOW);
  delay (80);
  //repetition 5
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);
  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);
  digitalWrite (8,HIGH); digitalWrite (5, HIGH);
  delay (80);
  digitalWrite (8,LOW); digitalWrite (5, LOW);
  delay (80);
  digitalWrite (10,HIGH); digitalWrite (3, HIGH);
  delay (80);
  digitalWrite (10,LOW); digitalWrite (3, LOW);
  delay (80);
  digitalWrite (12,HIGH); digitalWrite (1, HIGH);
  delay (80);
  digitalWrite (12,LOW); digitalWrite (1, LOW);
  delay (80);

//pattern 4 
  //repetition 1
  for (int thisPin = 0; thisPin<=13; thisPin++){
   digitalWrite (thisPin, HIGH);
   delay (30);
  }
   for (int thisPin = 0; thisPin<=13; thisPin++){
   digitalWrite (thisPin, LOW);
   delay (30);
  }

  for (int thisPin=13; thisPin >=0 ; thisPin--){
   digitalWrite (thisPin, HIGH);
   delay (30);
  }
  for (int thisPin=13; thisPin >=0 ; thisPin--){
   digitalWrite (thisPin, LOW);
   delay (30);
  }
  //repetition 2
  for (int thisPin = 0; thisPin<=13; thisPin++){
   digitalWrite (thisPin, HIGH);
   delay (30);
  }
   for (int thisPin = 0; thisPin<=13; thisPin++){
   digitalWrite (thisPin, LOW);
   delay (30);
  }

  for (int thisPin=13; thisPin >=0 ; thisPin--){
   digitalWrite (thisPin, HIGH);
   delay (30);
  }
  for (int thisPin=13; thisPin >=0 ; thisPin--){
   digitalWrite (thisPin, LOW);
   delay (30);
  }
  //repetition 3
  for (int thisPin = 0; thisPin<=13; thisPin++){
   digitalWrite (thisPin, HIGH);
   delay (30);
  }
   for (int thisPin = 0; thisPin<=13; thisPin++){
   digitalWrite (thisPin, LOW);
   delay (30);
  }

  for (int thisPin=13; thisPin >=0 ; thisPin--){
   digitalWrite (thisPin, HIGH);
   delay (30);
  }
  for (int thisPin=13; thisPin >=0 ; thisPin--){
   digitalWrite (thisPin, LOW);
   delay (30);
  }
  //repetition 4
  for (int thisPin = 0; thisPin<=13; thisPin++){
   digitalWrite (thisPin, HIGH);
   delay (30);
  }
   for (int thisPin = 0; thisPin<=13; thisPin++){
   digitalWrite (thisPin, LOW);
   delay (30);
  }

//pattern 5
   //repetition 1
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (300);
   //repetition 2
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (300);
   //repetition 3
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (300);
   //repetition 4
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (300);
   //repetition 5
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (300);
   
//pattern 6 
  //repetition 1
  for (int thisPin = 0; thisPin <=13; thisPin++) {
    digitalWrite(thisPin, HIGH);
    delay(80);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
  }
  for (int thisPin = 12; thisPin >0; thisPin--) {
    // turn the pin on:
    digitalWrite(thisPin, HIGH);
    delay(80);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
  }
  //repetition 2
  for (int thisPin = 0; thisPin <=13; thisPin++) {
    digitalWrite(thisPin, HIGH);
    delay(80);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
  }
  for (int thisPin = 12; thisPin >0; thisPin--) {
    // turn the pin on:
    digitalWrite(thisPin, HIGH);
    delay(80);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
  }
  //repetition 3
  for (int thisPin = 0; thisPin <=13; thisPin++) {
    digitalWrite(thisPin, HIGH);
    delay(80);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
  }
  for (int thisPin = 12; thisPin >0; thisPin--) {
    // turn the pin on:
    digitalWrite(thisPin, HIGH);
    delay(80);
    // turn the pin off:
    digitalWrite(thisPin, LOW);
  }
  
//pattern 7 blinking LED
   //blinking red LED
   //repetition 1
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 2
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 3
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 4
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 5
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 6
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 7
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 8
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 9
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 10
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 11
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 12
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 13
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 14
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 15
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 16
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 17
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 18
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 19
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);
   //repetition 20
   digitalWrite (0,HIGH);digitalWrite (2,HIGH);  digitalWrite(4,HIGH);  digitalWrite(6,HIGH);digitalWrite(8,HIGH);digitalWrite(10,HIGH);digitalWrite(12,HIGH);
   delay (100); 
   digitalWrite (0,LOW);digitalWrite (2,LOW);  digitalWrite(4,LOW);  digitalWrite(6,LOW);digitalWrite(8,LOW);digitalWrite(10,LOW);digitalWrite(12,LOW);
   delay (100);

   //blinking blue LED
   //repetition 1
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 2
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 3
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 4
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 5
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 6
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 7
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 8
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 9
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 10
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 11
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 12
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 13
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 14
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 15
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 16
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 17
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 18
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 19
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);
   //repetition 20
   digitalWrite (1,HIGH); digitalWrite(3,HIGH);  digitalWrite(5,HIGH); digitalWrite(7,HIGH); digitalWrite(9,HIGH);digitalWrite(11,HIGH); digitalWrite(13,HIGH);
   delay (100); 
   digitalWrite (1,LOW); digitalWrite(3,LOW);  digitalWrite(5,LOW); digitalWrite(7,LOW); digitalWrite(9,LOW);digitalWrite(11,LOW); digitalWrite(13,LOW);
   delay (100);

//pattern 8
  //repetition 1
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);

  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);

  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);

  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);

  //repetition 1
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);

  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);

  //repetition 2
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);

  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);

  //repetition 3
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);

  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);

  //repetition 4
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);

  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);

  //repetition 5
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);

  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);
  

  //pattern 9
  //repetition 1
  digitalWrite (0,HIGH); 
  delay (80);
  digitalWrite (2,HIGH); 
  delay (80);
  digitalWrite (4,HIGH); 
  delay (80);
  digitalWrite (6,HIGH); 
  delay (80);
  digitalWrite (8,HIGH); 
  delay (80);
  digitalWrite (10,HIGH); 
  delay (80);
  digitalWrite (12,HIGH); 
  delay (80);
  
  digitalWrite (0,LOW); 
  delay (80);
  digitalWrite (2,LOW); 
  delay (80);
  digitalWrite (4,LOW); 
  delay (80);
  digitalWrite (6,LOW); 
  delay (80);
  digitalWrite (8,LOW); 
  delay (80);
  digitalWrite (10,LOW); 
  delay (80);
  digitalWrite (12,LOW); 
  delay (80);
  
  digitalWrite (13, HIGH);
  delay (80);
   digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (5, HIGH);
  delay (80);
  digitalWrite (3, HIGH);
  delay (80);
  digitalWrite (1, HIGH);
  delay (80);
  
  digitalWrite (13, LOW);
  delay (80);
  digitalWrite (11, LOW);
  delay (80);
  digitalWrite (9, LOW);
  delay (80);
  digitalWrite (7, LOW);
  delay (80);
  digitalWrite (5, LOW);
  delay (80);
  digitalWrite (3, LOW);
  delay (80);
  digitalWrite (1, LOW);
  delay (80);

  //repetition 2
  digitalWrite (0,HIGH); 
  delay (80);
  digitalWrite (2,HIGH); 
  delay (80);
  digitalWrite (4,HIGH); 
  delay (80);
  digitalWrite (6,HIGH); 
  delay (80);
  digitalWrite (8,HIGH); 
  delay (80);
  digitalWrite (10,HIGH); 
  delay (80);
  digitalWrite (12,HIGH); 
  delay (80);
  
  digitalWrite (0,LOW); 
  delay (80);
  digitalWrite (2,LOW); 
  delay (80);
  digitalWrite (4,LOW); 
  delay (80);
  digitalWrite (6,LOW); 
  delay (80);
  digitalWrite (8,LOW); 
  delay (80);
  digitalWrite (10,LOW); 
  delay (80);
  digitalWrite (12,LOW); 
  delay (80);
  
  digitalWrite (13, HIGH);
  delay (80);
   digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (5, HIGH);
  delay (80);
  digitalWrite (3, HIGH);
  delay (80);
  digitalWrite (1, HIGH);
  delay (80);
  
  digitalWrite (13, LOW);
  delay (80);
  digitalWrite (11, LOW);
  delay (80);
  digitalWrite (9, LOW);
  delay (80);
  digitalWrite (7, LOW);
  delay (80);
  digitalWrite (5, LOW);
  delay (80);
  digitalWrite (3, LOW);
  delay (80);
  digitalWrite (1, LOW);
  delay (80);

    //repetition 3
  digitalWrite (0,HIGH); 
  delay (80);
  digitalWrite (2,HIGH); 
  delay (80);
  digitalWrite (4,HIGH); 
  delay (80);
  digitalWrite (6,HIGH); 
  delay (80);
  digitalWrite (8,HIGH); 
  delay (80);
  digitalWrite (10,HIGH); 
  delay (80);
  digitalWrite (12,HIGH); 
  delay (80);
  
  digitalWrite (0,LOW); 
  delay (80);
  digitalWrite (2,LOW); 
  delay (80);
  digitalWrite (4,LOW); 
  delay (80);
  digitalWrite (6,LOW); 
  delay (80);
  digitalWrite (8,LOW); 
  delay (80);
  digitalWrite (10,LOW); 
  delay (80);
  digitalWrite (12,LOW); 
  delay (80);
  
  digitalWrite (13, HIGH);
  delay (80);
   digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (5, HIGH);
  delay (80);
  digitalWrite (3, HIGH);
  delay (80);
  digitalWrite (1, HIGH);
  delay (80);
  
  digitalWrite (13, LOW);
  delay (80);
  digitalWrite (11, LOW);
  delay (80);
  digitalWrite (9, LOW);
  delay (80);
  digitalWrite (7, LOW);
  delay (80);
  digitalWrite (5, LOW);
  delay (80);
  digitalWrite (3, LOW);
  delay (80);
  digitalWrite (1, LOW);
  delay (80);
  

//pattern 10
   digitalWrite(8,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(8,LOW);  digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(7,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(7,LOW);digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(6,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(6,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(5,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(5,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(4,HIGH); digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(4,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(3,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(3,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300); 
   digitalWrite (2,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (2,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (1,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (1,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);

   digitalWrite(8,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(8,LOW);  digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(7,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(7,LOW);digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(6,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(6,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(5,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(5,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(4,HIGH); digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(4,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(3,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(3,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300); 
   digitalWrite (2,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (2,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (1,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (1,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);

   digitalWrite(8,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(8,LOW);  digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(7,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(7,LOW);digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(6,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(6,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(5,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(5,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(4,HIGH); digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(4,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(3,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(3,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300); 
   digitalWrite (2,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (2,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (1,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (1,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);

   digitalWrite(8,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(8,LOW);  digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(7,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(7,LOW);digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(6,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(6,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(5,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(5,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(4,HIGH); digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(4,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite(3,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite(3,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300); 
   digitalWrite (2,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (2,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (1,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (1,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(11,HIGH);digitalWrite(12,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(13,LOW);
   delay (300);
  

   
   

//pattern 11
  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);

  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);

   digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);

  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);

   digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);

  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);

  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);

  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);

  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);

  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);

  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);

  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);

  digitalWrite (6,HIGH); digitalWrite (7, HIGH);
  delay (80);
  digitalWrite (5,HIGH); digitalWrite (8, HIGH);
  delay (80);
  digitalWrite (4,HIGH); digitalWrite (9, HIGH);
  delay (80);
  digitalWrite (3,HIGH); digitalWrite (10, HIGH);
  delay (80);
  digitalWrite (2,HIGH); digitalWrite (11, HIGH);
  delay (80);
  digitalWrite (1,HIGH); digitalWrite (12, HIGH);
  delay (80);
  digitalWrite (0,HIGH); digitalWrite (13, HIGH);
  delay (80);

  digitalWrite (6,LOW); digitalWrite (7, LOW);
  delay (80);
  digitalWrite (5,LOW); digitalWrite (8, LOW);
  delay (80);
  digitalWrite (4,LOW); digitalWrite (9, LOW);
  delay (80);
  digitalWrite (3,LOW); digitalWrite (10, LOW);
  delay (80);
  digitalWrite (2,LOW); digitalWrite (11, LOW);
  delay (80);
  digitalWrite (1,LOW); digitalWrite (12, LOW);
  delay (80);
  digitalWrite (0,LOW); digitalWrite (13, LOW);
  delay (80);

//pattern 12
   //repetition 1
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH);  digitalWrite(5,HIGH); 
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(5,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH);  digitalWrite(6,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW);  digitalWrite(6,LOW); 
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(7,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW);  digitalWrite(7,LOW); 
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(8,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(8,LOW); 
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(9,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW);  digitalWrite(9,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(10,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW);  digitalWrite(10,LOW); 
   delay (300); 
    digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(11,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW);  digitalWrite(11,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(12,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW);  digitalWrite(12,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW);  digitalWrite(13,LOW);
   delay (300); 

   //repetition 2
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH);  digitalWrite(5,HIGH); 
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(5,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH);  digitalWrite(6,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW);  digitalWrite(6,LOW); 
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(7,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW);  digitalWrite(7,LOW); 
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(8,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(8,LOW); 
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(9,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW);  digitalWrite(9,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(10,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW);  digitalWrite(10,LOW); 
   delay (300); 
    digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(11,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW);  digitalWrite(11,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(12,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW);  digitalWrite(12,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW);  digitalWrite(13,LOW);
   delay (300); 

   //repetition  3
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH);  digitalWrite(5,HIGH); 
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(5,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH);  digitalWrite(6,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW);  digitalWrite(6,LOW); 
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(7,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW);  digitalWrite(7,LOW); 
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(8,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(8,LOW); 
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(9,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW);  digitalWrite(9,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(10,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW);  digitalWrite(10,LOW); 
   delay (300); 
    digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(11,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW);  digitalWrite(11,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(12,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW);  digitalWrite(12,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW);  digitalWrite(13,LOW);
   delay (300); 

   //repetition  4
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH);  digitalWrite(5,HIGH); 
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(5,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH);  digitalWrite(6,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW);  digitalWrite(6,LOW); 
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(7,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW);  digitalWrite(7,LOW); 
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(8,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(8,LOW); 
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(9,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW);  digitalWrite(9,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(10,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW);  digitalWrite(10,LOW); 
   delay (300); 
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(11,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW);  digitalWrite(11,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(12,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW);  digitalWrite(12,LOW);
   delay (300);
   digitalWrite (0,HIGH);digitalWrite (1,HIGH);digitalWrite (2,HIGH); digitalWrite(3,HIGH); digitalWrite(4,HIGH); digitalWrite(5,HIGH); digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(10,HIGH);digitalWrite(13,HIGH);
   delay (300); 
   digitalWrite (0,LOW);digitalWrite (1,LOW);digitalWrite (2,LOW); digitalWrite(3,LOW); digitalWrite(4,LOW); digitalWrite(5,LOW); digitalWrite(6,LOW); digitalWrite(7,LOW); digitalWrite(8,LOW); digitalWrite(9,LOW); digitalWrite(10,LOW);  digitalWrite(13,LOW);
   delay (300); 
 
  
}

