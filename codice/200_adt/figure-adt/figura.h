typedef struct {
  float lato;
} DatiQuadrato;

typedef struct {
  float base;
  float altezza;
} DatiRettangolo;

typedef float DatiTriangolo[3];

// ADT figura

typedef struct {
  enum { Quadrato, Rettangolo, Triangolo } tipo_figura;
  union {
    DatiQuadrato datiQuadrato;      // 1 float
    DatiRettangolo datiRettangolo;  // 2 float
    DatiTriangolo datiTriangolo;    // array di 3 float
  } dati_figura;
} Figura;

// Operazioni su Figura

// costruttori
void quadrato(Figura* pf, float l);
void rettangolo(Figura* pf, float b, float h);
void triangolo(Figura* pf, float a, float b, float c);

// funzioni
float perimetro(Figura* pf);
float area(Figura* pf);
