#define Verde 3
#define Azul 2
#define Rojo 4
#define boton 1
int i = 0;
void setup()
{
  pinMode(Verde, OUTPUT);
  pinMode(Azul, OUTPUT);
  pinMode(Rojo, OUTPUT);
  pinMode(boton, INPUT);
 
}

void loop()
{
 
  if(digitalRead(boton) == HIGH)
  {
    if(i == 8)
  {
    i = 0;
  }
  i = i + 1;
   
   if(i == 1)
  {
     while(digitalRead(boton) == HIGH)
     {
      digitalWrite(Rojo, HIGH);
     }
     digitalWrite(Rojo, LOW);
  }
  else if (i == 2)
  {
    while(digitalRead(boton) == HIGH)
     {
      digitalWrite(Azul, HIGH);
      digitalWrite(Verde, HIGH);
     }
      digitalWrite(Azul, LOW);
      digitalWrite(Verde, LOW);
  }
    else if (i == 3)
  {
    while(digitalRead(boton) == HIGH)
     {
      digitalWrite(Verde, HIGH);
     }
      digitalWrite(Verde, LOW);
  }
  else if (i == 4)
  {
    while(digitalRead(boton) == HIGH)
     {
      digitalWrite(Rojo, HIGH);
      digitalWrite(Azul, HIGH);
      }
    digitalWrite(Rojo, LOW);
    digitalWrite(Azul, LOW);

  }
    else if (i == 5)
  {
    while(digitalRead(boton) == HIGH)
     {
      digitalWrite(Azul, HIGH);
     }
    digitalWrite(Azul, LOW);

  }
    else if (i == 6)
  {
    while(digitalRead(boton) == HIGH)
     {
      digitalWrite(Azul, HIGH);
      digitalWrite(Rojo, HIGH);
      digitalWrite(Verde, HIGH);
     }
    digitalWrite(Azul, LOW);
    digitalWrite(Rojo, LOW);
    digitalWrite(Verde, LOW);

  }
    else if (i == 7)
  {
    while(digitalRead(boton) == HIGH)
     {
      digitalWrite(Rojo, HIGH);
      digitalWrite(Verde, HIGH);
     }
    digitalWrite(Rojo, LOW);
    digitalWrite(Verde, LOW);

  }
  }
   
 
}