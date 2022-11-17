#include <stdio.h>
#define DIM 5

int valore_assoluto(int n) {
  return n < 0 ? -n : n;
}

int main() {
  int a[DIM], i;
  int m;  // accumulatore dell'indice dell'elemento di valore assoluto minimo

  // input
  for (i = 0; i < DIM; i++)
    scanf("%d", &a[i]);

  m = 0;
  for (i = 1; i < DIM; i++)
    m = valore_assoluto(a[i]) < valore_assoluto(a[m]) ? i : m;

  printf("%d\n", a[m]);
  return 0;
}