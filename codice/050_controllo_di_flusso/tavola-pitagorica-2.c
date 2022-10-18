#include <stdio.h>

main() {
  int i, j;
  for (i = 1; i <= 10; i++) {
    for (j = i; j <= i * 10; j = j + i)
      printf("%d ", j);
    printf("\n");
  }
}