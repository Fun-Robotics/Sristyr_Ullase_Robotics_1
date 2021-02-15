
int ledPin = 9;
void setup() {
 // nothing happens in setup
}
void loop() {
 // fade in from min to max in increments of 64 points:
 analogWrite(ledPin, 0);
 delay(1000);
 analogWrite(ledPin, 64);
 delay(1000);
 analogWrite(ledPin, 128);
 delay(1000);
 analogWrite(ledPin, 191);
 delay(1000);
 analogWrite(ledPin, 255);
 delay(1000);
}
