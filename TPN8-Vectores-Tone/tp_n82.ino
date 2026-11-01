const int TEMPO = 120;
const int BUZZER = 8;

// Canal 1
const int notas[] = {
131,165,196,165,131,165,196,165,
156,196,233,277,233,185,156,
330,370,523,440,392,349,294,
247,208,233,262,247,208,262,
247,494,466,415,349,262,220,
185,175,196,139,175,208,175
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