#define verde 3
#define azul 5
#define rojo 6
#define pot A5
#define boton 7 

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(boton, INPUT); 
}

void loop() {
  int estadoBoton = digitalRead(boton);

  if (estadoBoton == HIGH) { 
    int valorPot = analogRead(pot);

  
    if (valorPot < 341) {
      analogWrite(rojo, map(valorPot, 0, 340, 0, 255));
      analogWrite(verde, 0);
      analogWrite(azul, 0);
    } else if (valorPot < 682) {
      analogWrite(rojo, 0);
      analogWrite(verde, map(valorPot, 341, 681, 0, 255));
      analogWrite(azul, 0);
    } else {
      analogWrite(rojo, 0);
      analogWrite(verde, 0);
      analogWrite(azul, map(valorPot, 682, 1023, 0, 255));
    }
  } else {
   
    analogWrite(rojo, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 0);
  }
}
