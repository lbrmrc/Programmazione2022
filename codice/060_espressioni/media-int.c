// scrivere un programma che richiede all'utente due numeri reali e stampa la
// loro media

// es. input 2.3 2.7, output 2.5

#include <stdio.h>

main() {
  int a, b;
  float m;
  printf("Inserisci due numeri interi\n");
  scanf("%d%d", &a, &b);
  m =  ((float)(a + b) / 2);
  printf("Media: %f\n", m);
}