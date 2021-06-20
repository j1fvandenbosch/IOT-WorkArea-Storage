//included library
//

//------------------------------------------------------------------------------


//pin veriable
//

// Define Rotary Encoder Inputs
#define CLK 2
#define DT 3
#define SW 4

//------------------------------------------------------------------------------


//defined veriable  
//

int counter = 0;
int currentStateCLK;
int lastStateCLK;
String currentDir ="";
unsigned long lastButtonPress = 0;

//------------------------------------------------------------------------------


//inital sketch setup
//

void setup() {
// Start serial monitor
  Serial.begin(9600);

// Set encoder pins as inputs
  pinMode(CLK,INPUT);
  pinMode(DT,INPUT);

  lastStateCLK = digitalRead(CLK);
  
}

//------------------------------------------------------------------------------


//main sketch loop
//

void loop() {
  
// Read the current state of CLK
  currentStateCLK = digitalRead(CLK);

// If last and current state of CLK are different, then pulse occurred
  if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){
    if (digitalRead(DT) != currentStateCLK) {
      counter --;
      currentDir ="CCW";
    } else {
      counter ++;
      currentDir ="CW";
    }

    Serial.print("Direction: ");
    Serial.print(currentDir);
    Serial.print(" | Counter: ");
    Serial.println(counter);
  }

// Remember last CLK state
  lastStateCLK = currentStateCLK;

// Button State
  int buttonState = digitalRead(SW);
  if (buttonState == LOW) {
    if (millis() - lastButtonPress > 50) {
      Serial.println("Button has Been Pressed");
    }
  }

// End of main sketch / loop delay 
  delay(5);

}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
