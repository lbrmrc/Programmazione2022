#include <stdio.h>

void divisione(int dividendo, int divisore, int* pq, int* pr, int* pok) {
  if (divisore != 0) {
    *pq = dividendo / divisore;
    *pr = dividendo % divisore;
    *pok = 1;
  } else {
    *pok = 0;
  }
}

int main(void) {
  int q, r;
  int dividendo, divisore;
  int ok;
  scanf("%d%d", &dividendo, &divisore);
  divisione(dividendo, divisore, &q, &r, &ok);
  if (ok)
    printf("%d, %d\n", q, r);
  else
    printf("Errore\n");
  return 0;
}