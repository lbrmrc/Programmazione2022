#include <stdio.h>

main() {
  int i, j;
  for (i = 1; i <= 10; i++) {
    for (j = 1; j <= 10; j++)
      printf("%d ", i * j);
      if (i * j > 50)
    printf("\n");
  }
}