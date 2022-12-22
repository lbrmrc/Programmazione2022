#define DIM 1000

typedef struct{
    char nome[31];
    float calorie100grammi;
} Record;

// interfaccia lista sequenziale di Record
typedef struct {
    Record dati[DIM];
    int n_elementi;
} Lista;

void lista_vuota(Lista *pl);
int piena(Lista l);
void insCoda(Lista *pl, Record r);
float calorie100grammi(Lista l, char nome[]);