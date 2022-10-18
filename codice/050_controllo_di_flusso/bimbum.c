#include <stdio.h>

main() {
  int n;  // variabile di S1 = [1..100]
  for (n = 1; n <= 100; n++) {
    // n assume i valori fra 1 e 100
    if (n % 3 == 0 && n % 5 == 0)
      printf("bimbum ");
    else if (n % 3 == 0)
      printf("bim ");
    else if (n % 5 == 0)
      printf("bum ");
    else
      printf("%d ", n);
  }
  printf("\n");
}