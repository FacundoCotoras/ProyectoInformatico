#define red1 0
#define blue2 1
#define green3 2
#define green4 12
#define blue4 4
#define blue5 5
#define red5 13
#define green6 7
#define red6 8
#define green7 3
#define blue7 9
#define red8 10
#define blue9 11
#define green10 6
#define pot A5
#define boton A4
int velocidad = 0;
int valorPot = 0;
void setup()
{
  pinMode(red1 , OUTPUT);
  pinMode(blue2 , OUTPUT);
  pinMode(green3 , OUTPUT);
  pinMode(green4 , OUTPUT);
  pinMode(blue4 , OUTPUT);
  pinMode(blue5 , OUTPUT);
  pinMode(green6 , OUTPUT);
  pinMode(red6 , OUTPUT);
  pinMode(green7 , OUTPUT);
  pinMode(blue7 , OUTPUT);
  pinMode(red8 , OUTPUT);
  pinMode(blue9 , OUTPUT);
  pinMode(green10 , OUTPUT);
  pinMode(pot , INPUT);
}

void loop()
{
   Serial.println(analogRead(boton));
    Serial.println(analogRead(pot));
   valorPot = analogRead(pot);
   velocidad = map(valorPot, 0, 1023, 50, 500);
  
  if(analogRead(boton) == 1023)
  {
   	delay(velocidad);
  	digitalWrite(red1, HIGH); // red
    delay(velocidad);
    digitalWrite(red1, LOW);
    digitalWrite(blue2, HIGH); // azul
 	delay(velocidad);
    digitalWrite(blue2, LOW);
 	digitalWrite(green3, HIGH); // vede
    delay(velocidad);
    digitalWrite(green3, LOW);
	digitalWrite(green4, HIGH);
	digitalWrite(blue4, HIGH); // cian
  	delay(velocidad);
    digitalWrite(green4, LOW);
  	digitalWrite(blue4, LOW);
  	digitalWrite(blue5, HIGH);
  	digitalWrite(red5, HIGH);// magenta
  	delay(velocidad);
    digitalWrite(blue5, LOW);
  	digitalWrite(red5, LOW);
  	digitalWrite(green6, HIGH);
  	digitalWrite(red6, HIGH); // amarillo
  	delay(velocidad);
    digitalWrite(green6, LOW);
  	digitalWrite(red6, LOW);
  	digitalWrite(green7, HIGH);
  	analogWrite(blue7, 20); // turquesa
  	delay(velocidad);
    digitalWrite(green7, LOW);
  	digitalWrite(blue7, LOW);
  	analogWrite(red8, 30); // rojo claro
  	delay(velocidad);
    digitalWrite(red8, LOW);
  	analogWrite(blue9, 40); // azul claro
  	delay(velocidad);
    digitalWrite(blue9, LOW);
  	analogWrite(green10, 40); // verde claro
  	delay(velocidad);
    digitalWrite(green10, LOW);

  	
  	
  	
  	
  	
  	
  	
  	
  	
  }

}