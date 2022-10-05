#include <stdio.h>

main() {
  int a, b, c;
  printf("Inserisci i tre lati\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a == b && a == c)
    printf("Equilatero\n");
  else if (a == b || a == c || b == c)
    printf("Isoscele\n");
  else
    printf("Scaleno\n");
}