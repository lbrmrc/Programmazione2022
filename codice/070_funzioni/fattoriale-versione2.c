#include <stdio.h>

int fattoriale(int n) {
  int prod = 1;

  while (n > 0) {
    prod *= n;
    n--;
  }

  return prod;
}

main() {
  int a;
  scanf("%d", &a);
  printf("%d\n", fattoriale(a));
}