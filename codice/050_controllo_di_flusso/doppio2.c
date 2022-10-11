#include <stdio.h>

main() {
  int n;
richiesta:
  scanf("%d", &n);
  printf("%d\n", n * 2); // stampa anche il doppio dei negativi
  if (n >= 0)
    goto richiesta;
  printf("Fine\n");
}