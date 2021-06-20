#include <Arduino.h>
#include <DS3231.h>
#include <Wire.h>

DS3231 clock;

bool century = false;
bool h12Flag;
bool pmFlag;

void setup() {
	// Start the serial port
	Serial.begin(57600);

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

  Serial.print(clock.getYear(), DEC);
  Serial.print("-");
  Serial.print(clock.getMonth(century), DEC);
  Serial.print("-");
  Serial.print(clock.getDate(), DEC);
  Serial.print(" ");

}