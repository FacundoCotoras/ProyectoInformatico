#define verde1 3
#define azul1 5
#define rojo1 6
#define verde2 9
#define azul2 10
#define rojo2 11
#define pot A0
void setup()
{
  pinMode(verde1, OUTPUT);
  pinMode(azul1, OUTPUT);
  pinMode(rojo1, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(azul2, OUTPUT);
  pinMode(rojo2, OUTPUT);
}

void loop()
{
  int valorPot = analogRead(pot);         
  int velocidad = map(valorPot, 0, 1023, 100, 1000);
  analogWrite(rojo1, 255);
  analogWrite(azul1, 255);
  analogWrite(verde1, 0);
  delay(velocidad);
  analogWrite(rojo1, 0);
  analogWrite(azul1, 0);
  delay(velocidad);
  analogWrite(rojo2, 255);
  analogWrite(verde2, 255);
  analogWrite(azul2, 0);
  delay(velocidad);
  analogWrite(rojo2, 0);
  analogWrite(verde2, 0);
  delay(velocidad);
}