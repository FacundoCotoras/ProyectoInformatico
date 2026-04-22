#define blanco 2
#define verde 4
#define buzz 9

void setup()
{
  pinMode(blanco, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(buzz, OUTPUT);
}

void loop()
{
  digitalWrite(blanco, HIGH);
    analogWrite(buzz, 1000);
  delay(100);
  digitalWrite(blanco, LOW);
    analogWrite(buzz, 0);
  digitalWrite(verde, HIGH);
  delay(100);
  digitalWrite(verde, LOW);




}