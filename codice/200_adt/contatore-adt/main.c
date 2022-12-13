#include <stdio.h>

// main.c è client dell'ADT contatore
// e ne include l'interfaccia
#include "contatore.h"

int main() {
  Contatore c; // istanza dell'ADT Contatore
  Contatore c2;
  Contatore contatori[100];
  inizializza(&c);
  stampa(c);
  incrementa(&c);
  incrementa(&c);
  stampa(c);
  inizializza(&c2);
  stampa(c2);
  return 0;
}