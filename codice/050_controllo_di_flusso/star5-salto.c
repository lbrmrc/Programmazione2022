#include <stdio.h>

main() {
  int i = 0;
scrivi:
  printf("*\n");
  i++;
  if (i < 5)
    goto scrivi;
  printf("\n");
}