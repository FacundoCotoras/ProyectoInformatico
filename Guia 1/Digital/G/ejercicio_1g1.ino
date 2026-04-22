#define Led1 2
#define Led2 3
#define Led3 4
#define boton 1
int i = 0;
void setup()
{
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(boton, INPUT);
 
 
 

 
}

void loop()
{
 
  digitalWrite(Led1, HIGH);
  digitalWrite(Led2, HIGH);
  digitalWrite(Led3, HIGH);
  if(digitalRead(boton) == HIGH)
  {
    if(i == 4)
  {
    i = 0;
  }
  i = i + 1;
   
   if(i == 1)
  {
     while(digitalRead(boton) == HIGH)
     {
      digitalWrite(Led3, LOW);
      digitalWrite(Led2, LOW);
     }
  }
  else if (i == 2)
  {
    while(digitalRead(boton) == HIGH)
     {
      digitalWrite(Led3, LOW);
      digitalWrite(Led1, LOW);
     }
  }
  else if (i == 3)
  {
    while(digitalRead(boton) == HIGH)
     {
      digitalWrite(Led2, LOW);
      digitalWrite(Led1, LOW);
     }
  }
    if(digitalRead(boton) == LOW)
    {
      digitalWrite(Led1, HIGH);
      digitalWrite(Led2, HIGH);
      digitalWrite(Led3, HIGH);
    }
  }
 
}