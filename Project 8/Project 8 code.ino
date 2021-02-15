void setup(){
Serial.begin(9600); // declare serial communication
}
void loop(){
int value = analogRead(0); //Read analog value from pot
Serial.println(value);
delay(100); //Small delay
}
