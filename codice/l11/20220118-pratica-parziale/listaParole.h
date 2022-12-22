typedef struct {
  char parola[31];
  int frequenza;
} Dato;

typedef struct nodo {
  Dato dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void nuova_lista(Lista *pl);
void aggiorna(Lista *pl, char *s);
void stampa(Lista l);
void elimina_parola(Lista* pl, char* s);