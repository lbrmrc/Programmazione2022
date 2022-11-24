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

void semplifica(Frazione* pf) {
  // (*puntatore).campo
  // si può scrivere
  // puntatore -> campo
  if (pf->num == 0) {
    pf->den = 1;
  } else {
    int m = MCD(valore_assoluto(pf->num), pf->den);
    pf->num = pf->num / m;
    pf->den = pf->den / m;
  }
}
int frazione(int n, int d, Frazione* pf) {
  if (d == 0) {
    return 1;
  }
  if (d < 0) {
    n = -n;
    d = -d;
  }
  (*pf).num = n;
  (*pf).den = d;
  semplifica(pf);
  return 0;
}

int somma(Frazione *pf1, Frazione *pf2, Frazione *pf) {
  return frazione(pf1->num * pf2->den + pf1->den * pf2->num, pf1->den * pf2->den, pf);
}

// Frazione sottrazione(Frazione f1, Frazione f2) {
//   return frazione(f1.num * f2.den - f1.den * f2.num, f1.den * f2.den);
// }

// Frazione moltiplicazione(Frazione f1, Frazione f2) {
//   return frazione(f1.num * f2.num, f1.den * f2.den);
// }

// Frazione divisione(Frazione f1, Frazione f2) {
//   return frazione(f1.num * f2.den, f1.den * f2.num);
// }

int leggi(Frazione* pf) {
  int n, d;
  scanf("%d%d", &n, &d);
  return frazione(n, d, pf);
}

void stampa_frazionaria(Frazione* pf) {
  printf("%d/%d", pf->num, pf->den);
}

// void stampa_decimale(Frazione f) {
//   printf("%f", (float)(f.num) / f.den);
// }

int main() {
  Frazione a, b, d;
  if (leggi(&d) == 0)
    stampa_frazionaria(&d);
    else
    {
        printf("Errore: denominatore nullo\n");
        exit(1);
    }
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