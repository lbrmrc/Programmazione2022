#include <stdio.h>

main() {
  int n;
  int i;
  int a;

  a = 1;  // v0
  for (i = 1; i <= 5; i++) {
    // i assume i valori fra 1 e 5
    scanf("%d", &n);
    // S1: n assume i 5 valori di input
    a = a * n;  // aggiornamento dell'accumulatore
    // a assume i valori dei prodotti dei numeri finora inseriti
  }
  // in a c'è il prodotto dei 5 numeri inseriti
  printf("Prodotto: %d\n", a);
}