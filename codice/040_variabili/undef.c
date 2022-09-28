#include <stdio.h>

main() {
  int a = 5;
  printf("%d\n", a += a = 4);
  printf("%d\n", a);
}