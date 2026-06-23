#define buzz 11

#define rojo 3
#define azul 6
#define verde 10

#define POT A0

#define POTR A1
#define POTG A2
#define POTB A3

#define boton 2

bool prendido = true;

bool estadoAnterior;

bool estadoLed = true;

int VEL = 0;

void setup()
{
  attachInterrupt( digitalPinToInterrupt(2) , BotonEX , FALLING );

  pinMode(buzz, OUTPUT);

  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);

  pinMode(boton, INPUT_PULLUP);

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



  VEL = analogRead(POT);

  VEL = map(VEL, 0, 1023, 0, 3000);



  int r = analogRead(POTR);
  int g = analogRead(POTG);
  int b = analogRead(POTB);

  r = map(r, 0, 1023, 0, 255);

  g = map(g, 0, 1023, 0, 255);

  b = map(b, 0, 1023, 0, 255);

  Serial.print("Tiempo: ");
  Serial.println(VEL / 1000.0);

  Serial.print("R: ");
  Serial.println(r);

  Serial.print("G: ");
  Serial.println(g);

  Serial.print("B: ");
  Serial.println(b);

  Serial.println("----------------");


  if (prendido == false)
  {
    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 0);

    noTone(buzz);
  }


  else
  {
    if (estadoLed == true)
    {
      analogWrite(rojo, r);
      analogWrite(verde, g);
      analogWrite(azul, b);

      tone(buzz, 1000);

      delay(VEL);

      noTone(buzz);

      estadoLed = false;
    }

    else
    {
      analogWrite(rojo, 0);
      analogWrite(verde, 0);
      analogWrite(azul, 0);

      delay(VEL);

      estadoLed = true;
    }
  }
}
void BotonEX()
{
  bool estadoBoton = digitalRead(boton);

  if (estadoBoton == LOW && estadoAnterior == HIGH)
  {
    prendido = !prendido;

    delay(200);
  }

  estadoAnterior = estadoBoton;
}
