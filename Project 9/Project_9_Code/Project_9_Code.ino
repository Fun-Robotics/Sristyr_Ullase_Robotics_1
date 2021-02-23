int ledPin = 9;
int potPin = 0;
void setup() {
}
void loop() {
  int value = analogRead(potPin);
  int value2 = map(value, 0, 1023, 0, 255);
  analogWrite(ledPin, value2);
  delay(100);
}
