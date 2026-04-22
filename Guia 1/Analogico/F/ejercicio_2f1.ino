#define led 3
#define pot A5
void setup()
{
  pinMode(led, OUTPUT);
   Serial.begin(9600);
}

void loop()
{
 int valorPot = analogRead(pot);                  
  int tiempoMs = map(valorPot, 0, 1023, 0, 10000); 
  float tiempoSeg = tiempoMs / 1000.0; 
  Serial.print("Delay actual: ");
  Serial.print(tiempoSeg);
  Serial.println(" segundos");
  digitalWrite(led, HIGH);   
  delay(tiempoMs);
  digitalWrite(led, LOW);  
  delay(tiempoMs);

}