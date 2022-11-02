#include <stdio.h>
#define DIM 5

int main() {
  float a[] = {2.4, 1.0, -3.4, 5.6,
                2.7};  // definire e inizializzare un array di 5 elementi
  int i;
  // stampa di tutti gli elementi dell'array

  for (i = 0; i < DIM; i++)
    // i varia su tutti gli indici validi
    printf("%f\n", a[i]);

  return 0;
}