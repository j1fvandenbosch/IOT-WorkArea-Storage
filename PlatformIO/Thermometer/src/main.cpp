#include <Arduino.h>
#include "DS3231.h"
#include "U8glib.h"
#include <Wire.h>

// define clock
DS3231 clock;

// define the u8g display
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);


bool century = false;
bool h12Flag;
bool pmFlag;

void setup() {
	// Start the serial port
	Serial.begin(115200);

	// Start the I2C interface
	Wire.begin();
}

void loop() {
  if (clock.getHour(h12Flag, pmFlag) < 10) Serial.print(" ");
  Serial.print(clock.getHour(h12Flag, pmFlag), DEC); //24-hr
  Serial.print(":");
  if (clock.getMinute() < 10) Serial.print("0");
  Serial.print(clock.getMinute(), DEC);
  Serial.print(":");
  if (clock.getSecond() < 10) Serial.print("0");
  Serial.println(clock.getSecond(), DEC);
  delay(1000);
}