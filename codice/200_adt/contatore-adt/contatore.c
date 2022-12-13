// ADT Contatore -Implementazione

#include <stdio.h>

// Inclusione dell'interfaccia
#include "contatore.h"


// Implementazione delle operazioni
void inizializza(Contatore *pc) {
  *pc = 0;
}

void incrementa(Contatore *pc) {
  (*pc)++;
}

void decrementa(Contatore *pc) {
  (*pc)--;
}

void stampa(Contatore c) {
  printf("%d\n", c);
}