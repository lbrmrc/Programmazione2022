// stampa l'alfabeto maiuscolo su una riga

#include <stdio.h>

main() {
  char c;
  for (c = 'A'; c <= 'Z'; c++)
    printf("%c", c);
  printf("\n");
}