#include <stdio.h>

main() {
  int i;
  int n;
  int s;
  s = 0;
  for (i = 1; i <= 5; i++) {
    scanf("%d", &n);
    s = s + n;
  }
  printf("%d\n", s);
}