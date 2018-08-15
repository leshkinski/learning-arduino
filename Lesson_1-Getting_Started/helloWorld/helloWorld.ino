/*
 * My first program
 */

int ledPin = 13;

void setup() {
  // initialise pins as outputs
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // turn the led on and off
  digitalWrite(ledPin,HIGH);
  delay(10);
  digitalWrite(ledPin,LOW);
  delay(500);
}
