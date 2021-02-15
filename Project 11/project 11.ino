void setup()
{
Serial.begin(9600);
pinMode(7,INPUT);// input in digital 7
// analog pin A0 declaration not required
}
void loop()
{
Serial.print("Analog Reading=");
int analog_val = analogRead(0);
Serial.print(analog_val);
Serial.print("\t Digital Reading=");
int digital_val = digitalRead(7);
Serial.println(digital_val);
delay(1000);
}
