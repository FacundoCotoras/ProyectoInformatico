#define Uno 0
#define Dos 3
#define Tres 5
#define Cuatro 6
#define Cinco 9
#define Seis 10
#define Siete 11
#define Ocho 13


void setup()
{
  pinMode(Uno , OUTPUT);
  pinMode(Dos , OUTPUT);
  pinMode(Tres , OUTPUT);
  pinMode(Cuatro , OUTPUT);
  pinMode(Cinco , OUTPUT);
  pinMode(Seis , OUTPUT);
  pinMode(Siete , OUTPUT);
  pinMode(Ocho , OUTPUT);
}

void loop()
{
  digitalWrite(Uno, LOW);
  analogWrite(Dos, 3);
  analogWrite(Tres, 50);
  analogWrite(Cuatro, 100);
  analogWrite(Cinco, 150);
  analogWrite(Seis, 220);
  analogWrite(Siete, 250);
  digitalWrite(Ocho, HIGH);
 
 

}