
void setup() { 
pinMode(9, OUTPUT);

}
void loop() {
 
 int value = analogRead(0); //Read analog value from pot
 
 int value2 = map(value, 0, 1023, 0, 255); /*Map value 0-1023 to 0-255*/
 
 analogWrite(9, value2); //Send PWM value to led
 delay(100); //Small delay
}
