#define led1 0
#define led2 2
#define led3 4
#define led4 6
#define led5 8
#define led6 9
#define led7 11
#define led8 13
#define led9 7
#define led10 12
#define boton 10

bool Precionado = true;
bool ultimoEstadoBoton = HIGH;

int paso = 0;

void setup() 
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(boton, INPUT);
}

void loop() 
{
  bool estadoBoton = digitalRead(boton);

  if (ultimoEstadoBoton == HIGH && estadoBoton == LOW) 
  {
    Precionado = !Precionado;
    delay(50);
  }

  ultimoEstadoBoton = estadoBoton;

  if (Precionado)
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);

    if (paso == 0)
    (
       digitalWrite(led1, HIGH)
    );
    if (paso == 1)
    (
       digitalWrite(led2, HIGH)
    );
    if (paso == 2)
    (
       digitalWrite(led3, HIGH)
    );
    if (paso == 3)
    (
       digitalWrite(led4, HIGH)
    );
    if (paso == 4)
    (
       digitalWrite(led5, HIGH)
    );
    if (paso == 5)
    (
       digitalWrite(led6, HIGH)
    );
    if (paso == 6) 
    (
      digitalWrite(led7, HIGH)
    );
    if (paso == 7)
    (
       digitalWrite(led8, HIGH)
    );
    if (paso == 8)
    (
       digitalWrite(led9, HIGH)
    );
    if (paso == 9) 
    (
      digitalWrite(led10, HIGH)
    );

    delay(50);
    paso++;

    if (paso > 9) 
    {
      paso = 0;
    }
  }
}