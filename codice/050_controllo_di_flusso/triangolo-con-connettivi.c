#include <stdio.h>

main() {
  int a, b, c;
  printf("Inserisci i tre lati\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a == b && a == c)
    printf("Equilatero\n");
  if ((a == b && a != c) || (a == c && a != b) || (b == c && a != b))
    printf("Isoscele\n");
  if (a != b && a != c && b != c)
    printf("Scaleno\n");
}