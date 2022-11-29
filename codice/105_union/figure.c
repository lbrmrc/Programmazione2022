#include <stdio.h>
#include <math.h>

typedef struct {
  float lato;
} DatiQuadrato;

typedef struct {
  float base;
  float altezza;
} DatiRettangolo;

typedef struct {
  enum { Quadrato, Rettangolo } tipo_figura;
  union {
    DatiQuadrato datiQuadrato;
    DatiRettangolo datiRettangolo;
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

float perimetro(Figura* pf) {
  switch (pf->tipo_figura) {
    case Quadrato:
      return pf->dati_figura.datiQuadrato.lato * 4;
    case Rettangolo:
      return (pf->dati_figura.datiRettangolo.base +
              pf->dati_figura.datiRettangolo.altezza) *
             2;
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
  return 0;
}