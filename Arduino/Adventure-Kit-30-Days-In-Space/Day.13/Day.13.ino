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

// Define the value of each cell
int tones[ROWS][COLS] = {
  {31, 93, 147, 208},
  {247, 311, 370, 440},
  {523, 587, 698, 880},
  {1397, 2637, 3729, 4978}
};

//------------------------------------------------------------------------------


//pin veriable
//

// Set pin for buzzer
int buzzer = 10;

// Set pins for keypad
byte rowPins[ROWS] = {5, 4, 3, 2};
byte colPins[COLS] = {9, 8, 7, 6};

//------------------------------------------------------------------------------


//defined functions
//

// Load cells
  Keypad keypadButtons = Keypad(makeKeymap(buttons), rowPins, colPins, ROWS, COLS);
  Keypad keypadTones = Keypad(makeKeymap(tones), rowPins, colPins, ROWS, COLS);

//unlock / change password
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
          return -1;
       }
       Serial.print("*");
    }
   
    Serial.print("");
    Serial.println("Device Successfully Unlocked!");
    return 0;
}
//------------------------------------------------------------------------------

//inital sketch setup
//

void setup() {
// Start serial monitor
  Serial.begin(9600);

// monitor keypad for * or #
  Serial.println("Press * to set new password or # to access the system.");

}


//------------------------------------------------------------------------------

//main sketch loop
//

void loop() {

// Call function for keypad lookup cell for button pushed
  char customButtons = keypadButtons.getKey();
  int customTones = keypadTones.getKey();

// Print value for key pressed
  if (customButtons){
    Serial.println(customButtons);
  }
  
// Sound buzzer value for key pressed
  if (customTones){
    tone(buzzer, customTones, 500);
    delay(500);
    noTone(buzzer);
  }

    if (customButtons == '*'){ // button to change password
    int access = unlockMode();
   
    if(access < 0) {
      Serial.println("Access Denied. Cannot change password without the old or default.");
    }
    else {
      Serial.println("Welcome, authorized user. Please Enter a new password: ");
      delay(500);
   
      for(int i = 0; i < PassLength; i++) {
        while(!(customButtons = keypadButtons.getKey())) {
        // wait infinitley for input
        }
   
        password[i] = customButtons;
        Serial.print("*");
      }
     
      Serial.println("");
      Serial.println("Password Successfully Changed!");
    }
  }
 
  if (customButtons == '#') { // button to access system
    int access = unlockMode();
    if(access < 0) {
      Serial.println("Access Denied.");
    }
    else {
      Serial.println("Welcome, authorized user. You may now begin using the system.");
    }
  }
 
// delay loop
  delay(1);

}
