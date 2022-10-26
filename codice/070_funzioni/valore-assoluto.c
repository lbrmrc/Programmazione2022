#include <stdio.h>

int valore_assoluto(int n) {
  return n < 0 ? -n : n;
}

int main() {
  int a;
  scanf("%d", &a);
  printf("|%d| = %d\n", a, valore_assoluto(a));
}