#include <stdio.h>

int main() {
  int frequenze[31];
  int voto;
  int i;
  int somma_voti;
  int numero_voti;
  int moda;

  for (i = 0; i <= 30; i++)
    frequenze[i] = 0;

  // input
  do {
    scanf("%d", &voto);
    if (voto == -1)
      break;
    frequenze[voto]++;
  } while (1);

  // voto minimo
  // il voto minimo è l'indice più basso con valore non nullo
  i = 0;
  while (i < 30 && frequenze[i] == 0)
    i++;
  printf("voto minimo: %d\n", i);

  // voto massimo
  i = 30;
  while (i > 0 && frequenze[i] == 0)
    i--;
  printf("voto massimo: %d\n", i);

  // media = somma / numero

  numero_voti = 0;
  for (i = 0; i <= 30; i++) {
    numero_voti += frequenze[i];
    somma_voti += i * frequenze[i];
  }
  printf("media: %f\n", (float)somma_voti / numero_voti);

  // voti più frequenti
  moda = 0;
  for (i = 1; i <= 30; i++)
    if (frequenze[i] > frequenze[moda]) {
      moda = i;
    }

  printf("Voti più frequenti:");
  for (i = 0; i <= 30; i++)
    if (frequenze[i] == frequenze[moda])
      printf(" %d", i);
  printf("\n");

  return 0;
}