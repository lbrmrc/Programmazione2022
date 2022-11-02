#include <stdio.h>
int main() {
  float a, b, c;
  float ascisse[21], ordinate[21];
  int i;
  // inizializzare ascisse
  // ascisse = [-1.0, -0.9, ... 0.9, 1.0

  for (i = 0; i < 21; i++)
    ascisse[i] = -1.0 + 0.1 * i;

  // richiedo all'utente i coefficienti
  printf("Inserisci i coefficienti\n");
  scanf("%f%f%f", &a, &b, &c);

  // ordinate = map (a * elemento^2 + b * elemento + c, ascisse)
  for (i = 0; i < 21; i++) {
    ordinate[i] = a * ascisse[i] * ascisse[i] + b * ascisse[i] + c;
  }

  // stampa delle coppie ordinate
  for (i = 0; i < 21; i++)
    printf("<%.1f, %f>\n", ascisse[i], ordinate[i]);
  return 0;
}