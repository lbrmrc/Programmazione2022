#include <stdio.h>
#include <stdlib.h>

#include "listaEsami.h"

int main(int argc, char* argv[]) {
  FILE* pf;
  Record r;
  Lista l;

    if (argc != 2){
        printf("Errore invocazione\n");
        exit(1);
    }

  pf = fopen(argv[1], "rb");
  if (pf == NULL){
    printf("Errore apertura file\n");
    exit(2);
  }

  nuova_lista(&l);

  while (fread(&r, sizeof(Record), 1, pf) == 1)
    aggiorna(&l, r);

  stampa(l);

  return 0;
}