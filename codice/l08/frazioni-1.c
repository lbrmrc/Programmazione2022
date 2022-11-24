#include <stdio.h>

typedef struct {
  int num;
  int den;
} Frazione;

Frazione frazione(int n, int d) {
  Frazione f;
  f.num = n;
  f.den = d;
  return f;
}

Frazione leggi() {
  int n, d;
  Frazione f;

  scanf("%d%d", &n, &d);
  f.num = n;
  f.den = d;
  return f;
}

void stampa_frazionaria(Frazione f) {
  printf("%d/%d", f.num, f.den);
}

void stampa_decimale(Frazione f) {
  printf("%f", (float)(f.num) / f.den);
}

int main() {
  Frazione a;
  a = leggi();
  stampa_frazionaria(a);
  printf("\n");
  stampa_decimale(a);
  printf("\n");
  return 0;
}