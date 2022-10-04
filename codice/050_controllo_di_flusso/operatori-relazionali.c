#include <stdio.h>

main() {
  int a = 2, b = -3;

  // a > b
  printf("%d\n", a > b);
  printf("%d\n", a > 0);
  printf("%d\n", a + b >= 0);
  printf("%d\n", a = b);
  a = 2;
  printf("%d\n", a == b);
  printf("%d\n", a + b != b + a);
}