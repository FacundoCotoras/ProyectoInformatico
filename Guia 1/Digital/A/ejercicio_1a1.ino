 #define rojo 0 
 #define amarillo 1 
 #define verde 2 
#define rojoP 3
#define blanco 4
void setup()
{
 
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojoP, OUTPUT);
  pinMode(blanco, OUTPUT);


}

void loop()
{
  digitalWrite(verde, LOW);
  digitalWrite(blanco, LOW);
  digitalWrite(rojo, HIGH);
  digitalWrite(rojoP, HIGH);
  delay(2000);
  digitalWrite(amarillo, HIGH);
  delay(1000);
  digitalWrite(rojo, LOW);
  digitalWrite(amarillo, LOW);
  digitalWrite(rojoP, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(blanco, HIGH);
  delay(2000);

}