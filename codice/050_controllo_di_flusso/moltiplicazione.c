#include <stdio.h>

main() {
  int m, n, i, p;
  printf("Inserisci due interi\n");
  scanf("%d%d", &m, &n);

  p = 0;
  for (i = 1; i <= n; i++) {
    // S1: m assume la sequenza di n elementi uguali a m
    p = p + m; //aggiornamento accumulatore
  }
  printf("Prodotto: %d\n", p);
}