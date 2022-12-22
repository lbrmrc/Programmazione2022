#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "listaParole.h"

int main(int argc, char* argv[]) {
  FILE* pf;
  Lista l;
  char parola[31];

  if (argc != 2) {
    printf("Utilizzo: %s nome_file_testo\n", argv[0]);
    exit(1);
  }
  // aprire file
  pf = fopen(argv[1], "rt");
  if (pf == NULL) {
    printf("Errore apertura del file %s\n", argv[1]);
    exit(2);
  }

  nuova_lista(&l);
  // per ogni parola del file
  while (fscanf(pf, "%s", parola) == 1)
    // aggiorno la lista
    aggiorna(&l, parola);
  fclose(pf);

  // stampare la lista delle frequenze
  stampa(l);

  return 0;
}