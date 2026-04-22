#define buzzer 3
#define pot A5
void setup()
{
  pinMode(buzzer, OUTPUT);
  
}

void loop()
{
  int valorPot = analogRead(pot);             
  int intensidad = map(valorPot, 0, 1023, 0, 255);
  analogWrite(buzzer, intensidad); 
}