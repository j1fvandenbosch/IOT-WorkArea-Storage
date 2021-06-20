// PIN veriable
//
// LedRGB
int blueLight = 9;
int greenLight = 10;
int redLight = 11;


//------------------------------------------------------------------------------

// Defined veriable  
//
int red = 0;
int green = 0;
int blue = 0;

//------------------------------------------------------------------------------

// Defined Functions
//

// LedRGB Color Writes
void RGB_color(int red_value, int green_value, int blue_value) {
  analogWrite(blueLight, blue_value);
  analogWrite(greenLight, green_value);
  analogWrite(redLight, red_value);
  delay(0);
}

//------------------------------------------------------------------------------

//Inital Program Setup
//
void setup() {
// Start serial monitor
  Serial.begin(9600);

// Declare LedRGB pin oututs
  pinMode(blueLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(redLight, OUTPUT);
}

//------------------------------------------------------------------------------

// Main Program Loop
void loop() {
  
// bump red
    red += 1;

// bump green
  if (red >= 255) {
    red = 0;
    green += 1;
}

// bump blue
  if (red >= 255 && green >= 255) {
    red = 0;
    green = 0;
    blue += 1;
}

// set LedRGB acording to loop defined variable red
    RGB_color(red, green, blue);

// print Percentage to serial monitor
  Serial.print(red);
  Serial.print(" ");
  Serial.print(green);
  Serial.print(" ");
  Serial.print(blue);
  Serial.println("");

// reset Loop
  if (red >= 255 && green >= 255 && blue >= 255){
    red = 0;
    green = 0;
    blue = 0;
}

// delay loop

}
