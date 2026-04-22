#define parlante 0
#define rojo 3
#define blanco 4
void setup()
{
 
  pinMode(parlante, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(blanco, OUTPUT);


}

void loop()
{
  digitalWrite(parlante, HIGH);
  digitalWrite(blanco, LOW);
  digitalWrite(rojo, HIGH);
  delay(2000);
  digitalWrite(parlante, LOW);
  digitalWrite(rojo, LOW);
  digitalWrite(blanco, HIGH);
  delay(2000);

}