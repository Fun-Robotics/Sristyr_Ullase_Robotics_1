#include <Servo.h>
Servo servo1;//servo pins
Servo servo2;
void setup() {
  servo1.attach(9);
  servo2.attach(10);
}
void loop() {
  servo1.write(25);
  servo2.write(130);
  delay(1000);
  servo1.write(70);
  servo2.write(65);
  delay(1000);
}
