#include <stdio.h>
#define DIM 201

int bisestile(int n) {
  if (n % 400 == 0)
    return 1;
  if (n % 4 == 0 && n % 100 != 0)
    return 1;
  return 0;
  // return n % 400 == 0 || (n  % 4 == 0 && n % 100 != 0);
}

int main() {
  int a[DIM];
  int b[DIM];  // contiene gli elementi di a che rappresentano anni bisestili
  // b = filter(bisestile, a)
  int i;
  int dl;  // dimensione logica di b
  for (i = 0; i < DIM; i++)
    a[i] = 1900 + i;

  // implementazione filter
  dl = 0;
  for (i = 0; i < DIM; i++)
    if (bisestile(a[i])) {
      b[dl] = a[i];
      dl++;
    }

  // ForEach (printf, b)
  for (i = 0; i < dl; i++)
    printf("%d ", b[i]);
  printf("\n");
  return 0;
}