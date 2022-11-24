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

Frazione somma(Frazione f1, Frazione f2) {
  Frazione f;
  f.num = f1.num * f2.den + f1.den * f2.num;
  f.den = f1.den * f2.den;
  return f;
}

Frazione sottrazione(Frazione f1, Frazione f2) {
  Frazione f;
  f.num = f1.num * f2.den - f1.den * f2.num;
  f.den = f1.den * f2.den;
  return f;
}

Frazione moltiplicazione(Frazione f1, Frazione f2) {
  Frazione f;
  f.num = f1.num * f2.num;
  f.den = f1.den * f2.den;
  return f;
}

Frazione divisione(Frazione f1, Frazione f2) {
  Frazione f;
  f.num = f1.num * f2.den;
  f.den = f1.den * f2.num;
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
  Frazione a, b, c;
  a = leggi();
  b = leggi();
  c = somma(a, b);
  stampa_frazionaria(c); printf("\n");
  c = sottrazione(a, b);
  stampa_frazionaria(c); printf("\n");
  c = moltiplicazione(a, b);
  stampa_frazionaria(c); printf("\n");
  c = divisione(a, b);
  stampa_frazionaria(c); printf("\n");
  return 0;
}