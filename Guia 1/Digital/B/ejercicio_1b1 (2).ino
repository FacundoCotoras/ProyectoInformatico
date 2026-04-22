#define uno 0
#define dos 1
#define tres 2
#define cuatro 3
#define cinco 4
#define seis 5
#define siete 6
#define ocho 7
#define nueve 8
#define diez 9

void setup()
{
  pinMode( uno, OUTPUT);
  pinMode(dos, OUTPUT);
  pinMode(tres, OUTPUT);
  pinMode(cuatro, OUTPUT);
  pinMode(cinco, OUTPUT);
  pinMode(seis, OUTPUT);
  pinMode(siete, OUTPUT);
  pinMode(ocho, OUTPUT);
  pinMode(nueve, OUTPUT);
  pinMode(diez, OUTPUT);
}

void loop()
{
 
  delay(500);
  digitalWrite(uno, HIGH);
  delay(500);
  digitalWrite(dos, HIGH);
  delay(500);
  digitalWrite(tres, HIGH);
  delay(500);
  digitalWrite(cuatro, HIGH);
  delay(500);
  digitalWrite(cinco, HIGH);
  delay(500);
  digitalWrite(seis, HIGH);
  delay(500);
  digitalWrite(siete, HIGH);
  delay(500);
  digitalWrite(ocho, HIGH);
  delay(500);
  digitalWrite(nueve, HIGH);
  delay(500);
  digitalWrite(diez, HIGH);
  delay(500);
  digitalWrite(uno, LOW);
  digitalWrite(dos, LOW);
  digitalWrite(tres, LOW);
  digitalWrite(cuatro, LOW);
  digitalWrite(cinco, LOW);
  digitalWrite(seis, LOW);
  digitalWrite(siete, LOW);
  digitalWrite(ocho, LOW);
  digitalWrite(nueve, LOW);
  digitalWrite(diez, LOW);

}