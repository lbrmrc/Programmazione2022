#include <stdio.h>

riga() {  // definizione di funzione
  int i;
  for (i = 0; i < 20; i++)
    printf("*");
  printf("\n");
}

main() {
  int j;
  for (j = 0; j < 5; j++)
    riga();  // chiamata a funzione
}