int ledPin = 9;
void setup() {
}
void loop() {
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
  analogWrite(ledPin, 191);
  delay(1000);
  analogWrite(ledPin, 128);
  delay(1000);
  analogWrite(ledPin, 64);
  delay(1000);
}
