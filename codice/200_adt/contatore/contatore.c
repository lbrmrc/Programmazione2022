#include <stdio.h>

int cont;

void inizializza() {
  cont = 0;
}

void incrementa() {
  cont++;
}

void stampa() {
  printf("%d\n", cont);
}