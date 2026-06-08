#include <Adafruit_NeoPixel.h>



#define NEOPIXEL 3
#define cant 12

#define pot1 A5
#define pot2 A4
#define pot3 A3

Adafruit_NeoPixel ring = Adafruit_NeoPixel(cant, NEOPIXEL, NEO_GRB + NEO_KHZ800);

int R1;
int R2;
int R3;
void setup()
{
  pinMode(NEOPIXEL, OUTPUT);
  
  ring.begin();
  ring.clear();
  ring.show();
  Serial.begin(9600); 
  randomSeed(analogRead(A0)); 
}

void loop()
{
  int Bloque1 = analogRead(pot1);
  Bloque1 = map(Bloque1, 0, 675, 0, 1000);
  ring.setPixelColor(0, 255, 0, 0, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  ring.setPixelColor(1, 0, 255, 0, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  ring.setPixelColor(2, 0, 0, 255, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  ring.setPixelColor(3, 255, 255, 0, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  ring.setPixelColor(4, 255, 255, 255, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  ring.setPixelColor(5, 123, 255, 0, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  ring.setPixelColor(6, 255, 0, 255, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  ring.setPixelColor(7, 123, 0, 255, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  ring.setPixelColor(8, 255, 123, 0, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  ring.setPixelColor(9, 255, 0, 123, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  ring.setPixelColor(10, 123, 255, 0, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  ring.setPixelColor(11, 0, 123, 255, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  ring.setPixelColor(12, 255, 255, 123, 255);
  ring.show();
  delay(Bloque1);
  ring.clear();
  ring.show();
  
  /////////////////////////////
  delay(1000);
  /////////////////////////////
  int Bloque2 = analogRead(pot2);
  Bloque2 = map(Bloque2, 0, 675, 0, 1000);
  ring.setPixelColor(0, 255, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(1, 0, 255, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(2, 0, 0, 255, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(3, 255, 255, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(4, 255, 255, 255, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(5, 123, 255, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(6, 255, 0, 255, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(7, 123, 0, 255, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(8, 255, 123, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(9, 255, 0, 123, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(10, 123, 255, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(11, 0, 123, 255, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(12, 255, 255, 123, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  //
  delay(500);
  ring.setPixelColor(12, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(11, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(10, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(9, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(8, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.setPixelColor(7, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(6, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(5, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(4, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(3, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.setPixelColor(2, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(1, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.show();
  ring.setPixelColor(0, 0, 0, 0, 255);
  ring.show();
  delay(Bloque2);
  ring.clear();
  ring.show();
  ////////////////////////////////////////////
  delay(1000);
  ///////////////////////////////////////////
  int Bloque3 = analogRead(pot3);
  Bloque3 = map(Bloque3, 0, 675, 0, 1000);
  R1 = random(0, 255); 
  R3 = random(0, 255);
  R2 = random(0, 255);
  ring.setPixelColor(0, R1, R2, R3, 255);
  ring.show();
  ring.setPixelColor(2, R1, R2, R3, 255);
  ring.show();
  ring.setPixelColor(4, R1, R2, R3, 255);
  ring.show();
  ring.setPixelColor(6, R1, R2, R3, 255);
  ring.show();
  ring.setPixelColor(8, R1, R2, R3, 255);
  ring.show();
  ring.setPixelColor(10, R1, R2, R3, 255);
  ring.show();
  ring.setPixelColor(12, R1, R2, R3, 255);
  ring.show();
  delay(Bloque3);
  ring.clear();
  ring.show();
  R1 = random(0, 255); 
  R3 = random(0, 255);
  R2 = random(0, 255);
  ring.setPixelColor(1, R1, R2, R3, 255);
  ring.show();
  ring.setPixelColor(3, R1, R2, R3, 255);
  ring.show();
  ring.setPixelColor(5, R1, R2, R3, 255);
  ring.show();
  ring.setPixelColor(7, R1, R2, R3, 255);
  ring.show();
  ring.setPixelColor(9, R1, R2, R3, 255);
  ring.show();
  ring.setPixelColor(11, R1, R2, R3, 255);
  ring.show();
  delay(Bloque3);
  ring.clear();
  ring.show();
  //////////////////////////////////////////////////
  delay(1000);
}