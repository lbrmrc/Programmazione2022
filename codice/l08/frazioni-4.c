#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int num;
  int den;
} Frazione;

int MCD(int a, int b) {
  while (a != b)
    if (a > b)
      a = a - b;
    else
      b = b - a;
  return a;
}

int valore_assoluto(int n) {
  return n >= 0 ? n : -n;
}

Frazione semplifica(Frazione f) {
  Frazione fs;
  if (f.num == 0) {
    fs.den = 1;
  } else {
    fs.num = f.num / MCD(valore_assoluto(f.num), f.den);
    fs.den = f.den / MCD(valore_assoluto(f.num), f.den);
  }
  return fs;
}

int frazione(int n, int d, Frazione* f) {
  if (d == 0) {
    return 1;
  }
  if (d < 0) {
    n = -n;
    d = -d;
  }
  (*f).num = n;
  (*f).den = d;
  *f = semplifica(*f);
  return 0;
}

// Frazione somma(Frazione f1, Frazione f2) {
//   return frazione(f1.num * f2.den + f1.den * f2.num, f1.den * f2.den);
// }

// Frazione sottrazione(Frazione f1, Frazione f2) {
//   return frazione(f1.num * f2.den - f1.den * f2.num, f1.den * f2.den);
// }

// Frazione moltiplicazione(Frazione f1, Frazione f2) {
//   return frazione(f1.num * f2.num, f1.den * f2.den);
// }

// Frazione divisione(Frazione f1, Frazione f2) {
//   return frazione(f1.num * f2.den, f1.den * f2.num);
// }

// Frazione leggi() {
//   int n, d;
//   scanf("%d%d", &n, &d);
//   return frazione(n, d);
// }

void stampa_frazionaria(Frazione f) {
  Frazione fs = f;
  printf("%d/%d", fs.num, fs.den);
}

void stampa_decimale(Frazione f) {
  printf("%f", (float)(f.num) / f.den);
}

int main() {
  Frazione a, b, c, d;
  frazione(2, 3, &d);
//   a = leggi();
//   b = leggi();
//   c = somma(a, b);
//   stampa_frazionaria(c);
//   printf("\n");
//   c = sottrazione(a, b);
//   stampa_frazionaria(c);
//   printf("\n");
//   c = moltiplicazione(a, b);
//   stampa_frazionaria(c);
//   printf("\n");
//   c = divisione(a, b);
//   stampa_frazionaria(c);
//   printf("\n");
  return 0;
}