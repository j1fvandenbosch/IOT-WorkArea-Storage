//included library
//

#include "U8glib.h"

//------------------------------------------------------------------------------


//pin veriable
//


//------------------------------------------------------------------------------


//defined veriable  
//

// I2C / TWI
U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NONE);

//------------------------------------------------------------------------------


//defined arrays
//


//------------------------------------------------------------------------------



//defined functions
//

void draw(void) {
  // graphic commands to redraw the complete screen should be placed here  
  u8g.setFont(u8g_font_unifont);
  u8g.drawStr( 0, 22, "Hello World");
}

//------------------------------------------------------------------------------



//inital sketch setup
//

void setup() {
// Start serial monitor
  Serial.begin(9600);

// flip screen, if required
/*  u8g.setRot180();*/
 
// assign default color value
  u8g.setColorIndex(1);
 
  pinMode(8, OUTPUT);

}

//------------------------------------------------------------------------------


//main sketch loop
//

void loop() {

// picture loop
  u8g.firstPage();
  do {
    draw();
  } while( u8g.nextPage() );

// End of main sketch / loop delay 
  delay(1);

}

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
