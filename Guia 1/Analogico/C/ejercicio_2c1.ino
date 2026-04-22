#define verde 6
#define azul 3
#define rojo 5
void setup()
{
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop()
{
  analogWrite(verde, 255);
  analogWrite(azul, 255);
 delay(500);
  analogWrite(verde, 150);
  analogWrite(azul, 150);
  delay(500);
  analogWrite(azul, 70);
  analogWrite(verde, 70);
  delay(500);
  analogWrite(azul, 0);
  analogWrite(verde, 0);
  analogWrite(rojo, 255);
  delay(500);
  analogWrite(rojo, 150);
  delay(500);
  analogWrite(rojo, 70);
  delay(500);
  analogWrite(rojo, 255);
  analogWrite(verde, 255);
  delay(500);
  analogWrite(rojo, 150);
  analogWrite(verde, 150);
  delay(500);
  analogWrite(rojo, 70);
  analogWrite(verde, 70);
  delay(500);
  analogWrite(rojo, 0);
  
}