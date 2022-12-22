typedef struct {
  int matricola;
  int voto_pratico;
  int voto_teorico;
} Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

typedef struct {
  int matricola;
  int voto;
  char tipo;
} Record;

void nuova_lista(Lista* pl);
void aggiorna(Lista* pl, Record r);
void stampa(Lista l);
Lista insertionSort(Lista l);