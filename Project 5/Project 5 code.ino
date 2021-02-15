void setup(){
 pinMode(10, OUTPUT); // Set buzzer - pin 9 as an output
}
void loop(){
 tone(10, 1000); // Send 1KHz sound signal...
 delay(1000); // ...for 1 sec
 noTone(10); // Stop sound...
 delay(1000); // ...for 1sec
}
