
void setup()
{
  pinMode(6, OUTPUT);
}

void loop()
{
  analogWrite(6, 255);
  delay(400);
  analogWrite(6, 200);
  delay(400);
  analogWrite(6, 150);
  delay(400);
  analogWrite(6, 100);
  delay(400);
  analogWrite(6, 50);
  delay(400);
}