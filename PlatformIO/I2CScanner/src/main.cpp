/*
  I2C Scanner
  Written by Nick Gammon
  Date: 20th April 2011

  Amended by John F Vanden Bosch Jr
  Date: January 21, 2021
*/

//included Library
//
#include <Arduino.h>
#include <U8glib.h>
#include <Wire.h>
//------------------------------------------------------------------------------

//defined constructor 128X64 OLE Display
//
  U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NONE);	// I2C / TWI 
//U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_DEV_0|U8G_I2C_OPT_FAST);	// Dev 0, Fast I2C / TWI
//U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NO_ACK);	// Display which does not send ACK
//------------------------------------------------------------------------------

//defined veriable  
//
int sixthSec = 150;
int oneSec = 1000;
int twoSec = 2000;
int i2cCount = 0;
uint8_t draw_state = 0;
//------------------------------------------------------------------------------

//defined drawinit
//
void drawInit(void) {
  u8g.setFont(u8g_font_unifont);
  u8g.setFontPosTop();
}
//------------------------------------------------------------------------------

//defined drawscanning
//
void drawScanning(void) {
  u8g.drawStr(0, 1, "I2C Scanner.");
  u8g.drawStr(35, 50, "Scanning ...");
}
//------------------------------------------------------------------------------

//defined drawfound
//
void drawFound(void) {
  u8g.drawStr(1, 0, "Found");

  char buf[3];
  sprintf (buf, "%d", i2cCount);
  u8g.drawStr(49, 19, buf);

  u8g.drawStr(43, 51, " device(s).");
}
//------------------------------------------------------------------------------

// drawing the pages
//
void draw(void) {
  switch(draw_state >> 0) {
    case 0: drawInit(); break;
    case 1: drawScanning(); break;
    case 2: drawInit(); break;
    case 3: drawFound(); break;
  }
}
//------------------------------------------------------------------------------

//inital program setup
//
void setup() {
 // Start serial monitor
 //Serial.begin(9600);

  do {
    // picture loop
    u8g.firstPage();
    do {
      draw();
    }
    while( u8g.nextPage() );
    draw_state++;
    delay(twoSec);
  }
  while (draw_state < 4);
  
  // rebuild the picture after some delay
  delay(sixthSec);
}
//------------------------------------------------------------------------------

//main program loop
//
void loop(void) {
}
// End of Sketch
//------------------------------------------------------------------------------
