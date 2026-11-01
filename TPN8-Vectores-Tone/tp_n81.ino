const int TEMPO = 120;
const int BUZZER = 8;

// Canal 1
const int notas[] = {
73,82,73,82,69,62,69,82,
92,82,73,65,58,73,104,98,
78,78,69,69,78,73,65,62,
65,69,65,65,69,78,73,78,
87,92,98,104,73,78,82,
87,92,87,82
};

const int figuras[] = {
16,16,16,16,16,16,16,16,
16,16,16,16,16,16,16,
16,16,16,16,16,16,16,
16,16,16,16,16,16,16,
16,16,16,16,16,16,16,
16,16,16,16,16,16,16
};

const int CANT_NOTAS = sizeof(notas) / sizeof(notas[0]);

int cuadritosToDuration(int figura)
{
  int redonda = (60000 * 4) / TEMPO;

  switch (abs(figura))
  {
    case 2:  return redonda;
    case 4:  return redonda / 2;
    case 8:  return redonda / 4;
    case 16: return redonda / 8;
    case 32: return redonda / 16;
  }

  return redonda / 8;
}

void playNote(int note, int duration)
{
  if (note == 0)
  {
    noTone(BUZZER);
    delay(duration);
  }
  else
  {
    tone(BUZZER, note);
    delay(duration);
    noTone(BUZZER);
  }
}

void playMelody(const int notes[], const int figures[], int length)
{
  for (int i = 0; i < length; i++)
  {
    int duration = cuadritosToDuration(figures[i]);
    playNote(notes[i], duration);
  }
}

void pauseBetweenLoops(int seconds)
{
  delay(seconds * 1000);
}

void setup()
{
}

void loop()
{
  playMelody(notas, figuras, CANT_NOTAS);

  pauseBetweenLoops(3);
}