#include <stdio.h>

int fattoriale(int n) {
  int i;
  int prod = 1;

  for (i = 1; i <= n; i++)
    prod *= i;

  return prod;
}

main() {
  int a;
  scanf("%d", &a);
  printf("%d\n", fattoriale(a));
}