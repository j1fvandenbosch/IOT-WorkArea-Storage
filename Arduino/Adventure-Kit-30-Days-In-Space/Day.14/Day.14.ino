//included library
//
#include <Keypad.h>

//------------------------------------------------------------------------------


//defined veriable  
//

// Define password length and default value
const byte PassLength = 4;
char password[PassLength] = {'0','0','0','0'};

// Define the number of rows and columns
const byte ROWS = 4;
const byte COLS = 4;

//------------------------------------------------------------------------------

//defined arrays
//

// Define the value of each cell
char buttons[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

//------------------------------------------------------------------------------


//pin veriable
//

// Set pin for buzzer
int buzzer = 8;

// LedRGB
int blueLight = 9;
int greenLight = 10;
int redLight = 11;

// Set pins for keypad
byte rowPins[ROWS] = {5, 4, 3, 2};
byte colPins[COLS] = {13, 12, 7, 6};

//------------------------------------------------------------------------------


//defined functions
//

// LedRGB Color Writes
void RGB_color(int red_value, int green_value, int blue_value) {
  analogWrite(blueLight, blue_value);
  analogWrite(greenLight, green_value);
  analogWrite(redLight, red_value);
  delay(500);
}

// Set Led and play Tone for input
void playInput() {
  tone(buzzer, 880, 250);
  RGB_color(0, 0, 125);
  delay(50);
  noTone(buzzer);
}

// Set Led and play Tone for a sucessful input
void playSuccess() {
  tone(buzzer, 370, 1000);
  RGB_color(0, 125, 0);
  delay(50);
  noTone(buzzer);
}

// Set Led and play Tone for a wrongfull input
void playError() {
  tone(buzzer, 147, 500);
  RGB_color(125, 0, 0);
  delay(50);
  noTone(buzzer);
}

// Load cells
  Keypad keypadButtons = Keypad(makeKeymap(buttons), rowPins, colPins, ROWS, COLS);

// unlock the system
int unlockMode(){
    char customButtons = keypadButtons.getKey();
    Serial.println("Unlock Mode: Type Password to continue");
    delay(500);

    for(int i = 0; i < PassLength; i++) {
       while(!(customButtons = keypadButtons.getKey())) {
         // wait infinitley for input
       }

       if(password[i] != customButtons){
          Serial.println("WRONG PASSWORD");
          Serial.println(customButtons);
          playError();
          return -1;
       }
       Serial.print("*");
       playInput();
    }

    Serial.print("");
    Serial.println("Device Successfully Unlocked!");
    playSuccess();
    return 0;
}

//------------------------------------------------------------------------------



//inital sketch setup
//

void setup() {
// Start serial monitor
  Serial.begin(9600);

// Declare LedRGB pin oututs
  pinMode(blueLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(redLight, OUTPUT);

// LedRGB color set
  RGB_color(125, 125, 125);

// monitor keypad for * or #
  Serial.println("Press * to set new password or # to access the system.");
}

//------------------------------------------------------------------------------



//main sketch loop
//

void loop() {

// Call function for keypad lookup cell for button pushed
  char customButtons = keypadButtons.getKey();

// Print value for key pressed
  if (customButtons){
    Serial.println(customButtons);
  }

// button to change passwords
  if (customButtons == '*'){
    int access = unlockMode();

// Test return of unlock mode
    if(access < 0) {
      Serial.println("Access Denied. Cannot change password without the old or default.");
      playError();
    }
    else {
      Serial.println("Welcome, authorized user. Please Enter a new password: ");
      playSuccess();
      delay(500);

      for(int i = 0; i < PassLength; i++) {
        while(!(customButtons = keypadButtons.getKey())) {
        // wait infinitley for input
        }

        password[i] = customButtons;
        Serial.print("*");
        playInput();  
      }

      Serial.println("");
      Serial.println("Password Successfully Changed!");
      playSuccess();
    }
  }

// button to access system
  if (customButtons == '#') {
    int access = unlockMode();

// Test return of unlock mode
    if(access < 0) {
      Serial.println("Access Denied.");
      playError();
    }
    else {
      Serial.println("Welcome, authorized user. You may now begin using the system.");
      playSuccess();
    }
  }

// End of main sketch loop delay 
  delay(1);

}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
