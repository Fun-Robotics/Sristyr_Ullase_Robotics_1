void setup()
{
  Serial.begin (9600);
}
void loop()
{
  Serial.print( "Analog Reading=");
  int data = analogRead(0);
  if (data < 100)
    Serial.println( "Line is white!" );
  else
    Serial.println( "Line is black!" );
}
