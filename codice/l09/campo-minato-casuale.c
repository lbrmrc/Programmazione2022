#include <stdio.h>
#include <stdlib.h>

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
      g[i][j] = rnd_float(0.0, 1.0) < PROBMINA;
}

void bordo_orizzontale(char c) {
  int j;
  for (j = 0; j < NCOLONNE + 2; j++)
    printf("%c", c);
  printf("\n");
}

void stampa(int g[NRIGHE][NCOLONNE]) {
  int i, j;
  bordo_orizzontale('-');
  for (i = 0; i < NRIGHE; i++) {
    printf("|");
    for (j = 0; j < NCOLONNE; j++)
      printf("%c", g[i][j] ? '*' : ' ');
    printf("|\n");
  }
  bordo_orizzontale('-');
}

int main() {
  int griglia[NRIGHE][NCOLONNE];
  // griglia[i][j] vale 1 se c'è una bomba, 0
  inizializza(griglia);
  stampa(griglia);
  return 0;
}