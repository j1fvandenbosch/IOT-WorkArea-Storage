//varables
int blueLight = 9;
int greenLight = 10;
int redLight = 11;

void RGB_color(int red_value, int green_value, int blue_value){
  analogWrite(blueLight, blue_value);
  analogWrite(greenLight, green_value);
  analogWrite(redLight, red_value);
  delay(500);
  
}

void setup() {
  pinMode(blueLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(redLight, OUTPUT);

}

void loop() {
  RGB_color(125, 0, 0); // Red
  RGB_color(0, 125, 0); // Green
  RGB_color(0, 0, 125); // Blue
  RGB_color(0, 125, 125); // yellow
  RGB_color(125, 0, 125); // purple
  RGB_color(125, 125, 125); // white

}
