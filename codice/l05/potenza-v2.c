#include <stdio.h>

float potenza(float base, int esp) {
  int cont;
  float prod;
  prod = 1.0;
  for (cont = 0; cont < (esp < 0 ? -esp : esp); cont++)
    prod *= base;
  return esp >= 0 ? prod : 1.0 / prod;
}

int main() {
  int e;
  float b;
  printf("Inserisci base (reale) ed esponente (intero con segno)\n");
  scanf("%f%d", &b, &e);
  printf("%f\n", potenza(b, e));
  return 0;
}