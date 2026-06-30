#include <Adafruit_NeoPixel.h>
#include <LiquidCrystal.h>


#define boton 2
#define neopixel 3
#define cant 6
#define LDR A0
Adafruit_NeoPixel ring = Adafruit_NeoPixel(cant, neopixel, NEO_GRB + NEO_KHZ800);

int luz;
bool prendido = true;
bool estadoAnterior;

void setup()
{
  attachInterrupt( digitalPinToInterrupt(2) , BotonFun , FALLING );
  pinMode(boton, INPUT_PULLUP);
  pinMode(LDR, INPUT);
  pinMode(neopixel, OUTPUT);
  ring.begin();
  ring.clear();
  ring.show();
  Serial.begin(9600); 
}

void loop()
{
   bool estadoBoton = digitalRead(boton);

  if (estadoBoton == LOW && estadoAnterior == HIGH)
  {
    prendido = !prendido;

    delay(200);
  }

  estadoAnterior = estadoBoton;
  
   luz = analogRead(LDR);
  luz = map(luz, 1022, 713, 0, 100);
  Serial.print("Sensor: LDR | Porcentual: ");
  Serial.println(luz);
  if (luz < 30)
  {
     ring.setPixelColor(0, 255, 0, 0, 255);
  ring.show(); 
    ring.setPixelColor(1, 255, 0, 0, 255);
  ring.show(); 
  }
  
  
}
void BotonFun()
{
   bool estadoBoton = digitalRead(boton);

  if (estadoBoton == LOW && estadoAnterior == HIGH)
  {
    prendido = !prendido;

    delay(200);
  }

  estadoAnterior = estadoBoton;
}