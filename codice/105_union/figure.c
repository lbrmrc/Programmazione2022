#include <math.h>
#include <stdio.h>

typedef struct {
  float lato;
} DatiQuadrato;

typedef struct {
  float base;
  float altezza;
} DatiRettangolo;

typedef float DatiTriangolo[3];

typedef struct {
  enum { Quadrato, Rettangolo, Triangolo } tipo_figura;
  union {
    DatiQuadrato datiQuadrato;      // 1 float
    DatiRettangolo datiRettangolo;  // 2 float
    DatiTriangolo datiTriangolo;    // array di 3 float
  } dati_figura;
} Figura;

void quadrato(Figura* pf, float l) {
  pf->tipo_figura = Quadrato;
  pf->dati_figura.datiQuadrato.lato = l;
}

void rettangolo(Figura* pf, float b, float h) {
  pf->tipo_figura = Rettangolo;
  pf->dati_figura.datiRettangolo.base = b;
  pf->dati_figura.datiRettangolo.altezza = h;
}

void triangolo(Figura* pf, float a, float b, float c) {
  pf->tipo_figura = Triangolo;
  pf->dati_figura.datiTriangolo[0] = a;
  pf->dati_figura.datiTriangolo[1] = b;
  pf->dati_figura.datiTriangolo[2] = c;
}

float perimetro(Figura* pf) {
  switch (pf->tipo_figura) {
    case Quadrato:
      return pf->dati_figura.datiQuadrato.lato * 4;
    case Rettangolo:
      return (pf->dati_figura.datiRettangolo.base +
              pf->dati_figura.datiRettangolo.altezza) *
             2;
    case Triangolo:
      return pf->dati_figura.datiTriangolo[0] +
             pf->dati_figura.datiTriangolo[1] +
             pf->dati_figura.datiTriangolo[2];
  }
}

float area(Figura* pf) {
  switch (pf->tipo_figura) {
    case Quadrato:
      return pf->dati_figura.datiQuadrato.lato *
             pf->dati_figura.datiQuadrato.lato;
    case Rettangolo:
      return pf->dati_figura.datiRettangolo.base *
             pf->dati_figura.datiRettangolo.altezza;
    case Triangolo: {
      float p = perimetro(pf) / 2;
      return sqrt(p * (p - pf->dati_figura.datiTriangolo[0]) *
                  (p - pf->dati_figura.datiTriangolo[1]) *
                  (p - pf->dati_figura.datiTriangolo[2]));
    }
  }
}

int main() {
  Figura f;
  rettangolo(&f, 2.5, 3.7);
  printf("Perimetro: %f\n", perimetro(&f));
  printf("Area: %f\n", area(&f));
  quadrato(&f, 2.5);
  printf("Perimetro: %f\n", perimetro(&f));
  printf("Area: %f\n", area(&f));
  triangolo(&f, 3, 4, 5);
  printf("Perimetro: %f\n", perimetro(&f));
  printf("Area: %f\n", area(&f));
  return 0;
}