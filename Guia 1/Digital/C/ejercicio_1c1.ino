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
digitalWrite(uno, HIGH);
  digitalWrite(tres, HIGH);
  digitalWrite(cinco, HIGH);
  digitalWrite(siete, HIGH);
  digitalWrite(nueve, HIGH);
  delay(1000);
digitalWrite(uno, LOW);
digitalWrite(tres, LOW);
digitalWrite(cinco, LOW);
digitalWrite(siete, LOW);
digitalWrite(nueve, LOW);

  digitalWrite(dos, HIGH);
digitalWrite(cuatro, HIGH);
digitalWrite(seis, HIGH);
digitalWrite(ocho, HIGH);
digitalWrite(diez, HIGH);
delay(1000);
  digitalWrite(dos, LOW);
digitalWrite(cuatro, LOW);
digitalWrite(seis, LOW);
digitalWrite(ocho, LOW);
digitalWrite(diez, LOW);

}