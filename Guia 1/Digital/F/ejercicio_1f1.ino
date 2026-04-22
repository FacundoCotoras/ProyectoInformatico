#define parlante 9
#define boton 11
void setup()
{
  pinMode(parlante, OUTPUT);
  pinMode(boton, INPUT);
}

void loop()
{
  if (digitalRead(boton) == HIGH)
     {
    digitalWrite(parlante, HIGH);
    delay(500);
    digitalWrite(parlante, LOW);
    delay(250);

 	 }
  else
 	 {
    noTone(parlante);
 	 }
}