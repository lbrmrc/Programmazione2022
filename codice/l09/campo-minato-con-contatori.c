#include <stdio.h>
#include <stdlib.h>

#define NRIGHE 4
#define NCOLONNE 6
#define PROBMINA 0.2

int mineAdiacenti(int g[NRIGHE][NCOLONNE], int i, int j) {
  int cont = 0;
  int m, n;
  //   for (m = i - 1; m <= i + 1; i++)
  //     if (m >= 0 && m < NRIGHE)
  //       for (n = j - 1; n <= j + 1; n++)
  //         if (n >= 0 && n < NCOLONNE)
  //           if (m != i || n != j)
  //             cont += g[m][n];
  cont += i >= 1 && j >= 1 && g[i - 1][j - 1];
  cont += i >= 1 && g[i - 1][j];
  cont += i >= 1 && j < NCOLONNE - 1 && g[i - 1][j + 1];
  cont += j >= 1 && g[i][j - 1];
  cont += j < NCOLONNE - 1 && g[i][j + 1];
  cont += i < NRIGHE - 1 && j >= 1 && g[i + 1][j - 1];
  cont += i < NRIGHE - 1 && g[i + 1][j];
  cont += i < NRIGHE - 1 && j < NCOLONNE - 1 && g[i + 1][j + 1];
  return cont;
}

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
      if (g[i][j])
        printf("*");
      else {
        int m = mineAdiacenti(g, i, j);
        if (m > 0)
          printf("%d", m);
        else
          printf(" ");
      };
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