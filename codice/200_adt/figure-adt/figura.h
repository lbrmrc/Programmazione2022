typedef struct {
  float lato;
} DatiQuadrato;

typedef struct {
  float base;
  float altezza;
} DatiRettangolo;

typedef float DatiTriangolo[3];

typedef struct {
  float raggio;
} DatiCerchio;

// ADT figura

typedef struct {
  enum { Quadrato, Rettangolo, Triangolo, Cerchio } tipo_figura;
  union {
    DatiQuadrato datiQuadrato;      // 1 float
    DatiRettangolo datiRettangolo;  // 2 float
    DatiTriangolo datiTriangolo;    // array di 3 float
    DatiCerchio datiCerchio;
  } dati_figura;
} Figura;

// Operazioni su Figura

// costruttori
void quadrato(Figura* pf, float l);
void rettangolo(Figura* pf, float b, float h);
void triangolo(Figura* pf, float a, float b, float c);
void cerchio(Figura* pf, float r);

// funzioni
float perimetro(Figura* pf);
float area(Figura* pf);
