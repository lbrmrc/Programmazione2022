#include <stdlib.h>
#include <stdio.h>

#define NRIGHE 4
#define NCOLONNE 6
#define PROBMINA 0.2

float rnd_float(float a, float b) {
  return a + (b - a) * (float)rand() / RAND_MAX;
}

void inizializza(int g[NRIGHE][NCOLONNE]) {
  int i, j;
  for (i = 0; i < NRIGHE; i++)
    for (j = 0; j < NCOLONNE; j++)
      if (rnd_float(0.0, 1.0) < PROBMINA)
        g[i][j] = 1;
      else
        g[i][j] = 0;
}

void stampa(int g[NRIGHE][NCOLONNE]) {
  int i, j;
  for (i = 0; i < NRIGHE; i++) {
    for (j = 0; j < NCOLONNE; j++)
      if (g[i][j] == 1)
        printf("*");
      else
        printf(" ");
    printf("\n");
  }
}

int main() {
  int griglia[NRIGHE][NCOLONNE];
  // griglia[i][j] vale 1 se c'è una bomba, 0
  inizializza(griglia);
  stampa(griglia);
  return 0;
}