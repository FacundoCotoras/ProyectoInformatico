#define verde 3
#define azul 5
#define rojo 6
#define p1 A5
#define p2 A4
#define p3 A3
void setup()
{
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop()
{
  int valRojo = analogRead(p1);  
  int valVerde = analogRead(p2);  
  int valAzul = analogRead(p3);   
   valRojo  = map(valRojo, 0, 1023, 0, 255);
   valVerde = map(valVerde, 0, 1023, 0, 255);
   valAzul  = map(valAzul, 0, 1023, 0, 255);
  analogWrite(rojo, valRojo);
  analogWrite(verde, valVerde);
  analogWrite(azul, valAzul);
}