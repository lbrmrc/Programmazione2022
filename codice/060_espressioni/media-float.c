// scrivere un programma che richiede all'utente due numeri reali e stampa la
// loro media

// es. input 2.3 2.7, output 2.5

#include <stdio.h>

main() {
  float a, b, m;
  printf("Inserisci due numeri reali\n");
  scanf("%f%f", &a, &b);
  m = (a + b) / 2.0;
  printf("Media: %f\n", m);
}