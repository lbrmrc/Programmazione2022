#include <stdio.h>

float potenza(float base, int esp) {
  int cont;
  float prod;
  prod = 1.0;
  if (esp < 0) {
    esp = -esp;
    base = 1.0 / base;
  }
  for (cont = 0; cont < esp; cont++)
    prod *= base;
  return prod;
}

int main() {
  int e;
  float b;
  printf("Inserisci base (reale) ed esponente (intero con segno)\n");
  scanf("%f%d", &b, &e);
  printf("%f\n", potenza(b, e));
  return 0;
}