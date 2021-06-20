//  ASCII table

// first visible ASCIIcharacter '!' is number 33:
int thisByte = 37;

void setup() {
  Serial.begin(9600);
  while (!Serial) { }

  // prints title with ending line break
  Serial.println("ASCII Table ~ Character Map");
  Serial.write(thisByte);
  Serial.print(", dec: ");

  Serial.print(", hex: ");
  Serial.println(thisByte, HEX);
}

void loop() {

}
