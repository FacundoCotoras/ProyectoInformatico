#include <LiquidCrystal.h>

LiquidCrystal LCD(9, 6, 10, 11, 12, 13);



#define LEDG 3
#define LEDR 2
#define BUZZ 4
#define TMP A0
#define MOV 7
#define LDR A2
#define SONIDO 5
#define ECHO A3
int TEMP;
bool MOVE = 0;
int distancia;
int LUZ;
  
void setup()
{
  pinMode(LEDG, OUTPUT);
  pinMode(LEDR, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  pinMode(TMP, INPUT);
  pinMode(MOV, INPUT);
  pinMode(LDR, INPUT);
  pinMode(SONIDO, OUTPUT);
  pinMode(ECHO, INPUT);
  LCD.begin(16, 2);
  Serial.begin(9600);
}

void loop()
{
  LUZ = analogRead(LDR);
  LUZ = map(LUZ, 713, 1022, 100, 0);
  // Serial.println(LUZ);
  LCD.setCursor(0, 0);
  LCD.print("LUZ:   ");
  LCD.setCursor(4, 0);
  LCD.print(LUZ);
  
  if(LUZ < 20)
  {
    LCD.setCursor(8, 1);
    LCD.print("DIST:");
    LCD.setCursor(13, 1);
    LCD.print("   ");
     TEMP = analogRead(TMP);
  	TEMP = map(TEMP, 20, 358, -40, 125);
 	// Serial.println(TEMP);
	LCD.setCursor(8, 0);
	LCD.print("TEMP:   ");
    LCD.setCursor(13, 0);
  
    if (TEMP > 39)
    {
      digitalWrite(LEDR, HIGH);
      digitalWrite(BUZZ, HIGH);
    } 
    else
    {
    
      digitalWrite(LEDR, LOW);
      digitalWrite(BUZZ, LOW);
    }
  
	if(LUZ < 20)
      LCD.print(TEMP);
    
    /////////////////////////////////////////////////////
    
    
 	MOVE = digitalRead(MOV);
    // Serial.println(MOVE);
    LCD.setCursor(0, 1);
  	LCD.print("MOV:");
  	LCD.setCursor(4, 1);
    if(LUZ < 20)
    { 
      if(MOVE == 0)
      {
          LCD.print("NO  ");
          digitalWrite(LEDR, LOW);
          digitalWrite(LEDG, LOW);
          digitalWrite(BUZZ, LOW);
      }
           
      else
      {
          digitalWrite(LEDR, HIGH);
          digitalWrite(LEDG, HIGH);
          digitalWrite(BUZZ, HIGH);
    	  LCD.print("SI  ");
      }
        
    }
  }
  else if (LUZ > 20)
  {
    LCD.setCursor(4, 1);
    LCD.print("  ");
    LCD.setCursor(13, 0);
    LCD.print("   ");
    digitalWrite(LEDR, LOW);
    digitalWrite(BUZZ, LOW);
    
    digitalWrite(SONIDO, HIGH);
    delayMicroseconds(10);
    digitalWrite(SONIDO, LOW);
    distancia = pulseIn(ECHO, HIGH);
    distancia = distancia * 0.034 / 2;
    LCD.setCursor(8, 1);
    LCD.print("DIST:   ");
    LCD.setCursor(13, 1);
    LCD.print(distancia);
    if(distancia < 100)
    {
      digitalWrite(LEDR, HIGH);
      digitalWrite(BUZZ, HIGH);
    }
    else
    {
      digitalWrite(LEDR, LOW);
      digitalWrite(BUZZ, LOW);
    }
    
  }
   
      
   
  
}