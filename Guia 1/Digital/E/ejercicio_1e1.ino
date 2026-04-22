#define verde 0
#define azul 1
#define rojo 2
#define verde2 9
#define azul2 10
#define rojo2 11
void setup()
{
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(azul2, OUTPUT);
  pinMode(rojo2, OUTPUT);
}

void loop()
{
  digitalWrite(rojo, HIGH);
  delay(200); 
  digitalWrite(rojo, LOW);
  digitalWrite(azul, HIGH);
  digitalWrite(verde, HIGH);
  delay(200);
  digitalWrite(azul, LOW);
  delay(200);
  digitalWrite(verde, LOW);
  digitalWrite(azul, HIGH);
  digitalWrite(rojo, HIGH);
  delay(200);
  digitalWrite(rojo, LOW);
  delay(200);
  digitalWrite(rojo, HIGH);
  digitalWrite(azul, HIGH);
  digitalWrite(verde, HIGH);
  delay(200);
  digitalWrite(azul, LOW);
  delay(200);
  digitalWrite(rojo, LOW);
  digitalWrite(verde, LOW);
  //
  digitalWrite(rojo2, HIGH);
  delay(200); 
  digitalWrite(rojo2, LOW);
  digitalWrite(azul2, HIGH);
  digitalWrite(verde2, HIGH);
  delay(200);
  digitalWrite(azul2, LOW);
  delay(200);
  digitalWrite(verde2, LOW);
  digitalWrite(azul2, HIGH);
  digitalWrite(rojo2, HIGH);
  delay(200);
  digitalWrite(rojo2, LOW);
  delay(200);
  digitalWrite(rojo2, HIGH);
  digitalWrite(azul2, HIGH);
  digitalWrite(verde2, HIGH);
  delay(200);
  digitalWrite(azul2, LOW);
  delay(200);
  digitalWrite(rojo2, LOW);
  digitalWrite(verde2, LOW);
  
}