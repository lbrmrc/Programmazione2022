#include <stdio.h>

void swap(int* pm, int* pn) {
  int t = *pm;
  *pm = *pn;
  *pn = t;
}

void ordina2(int* pm, int* pn) {
  if (*pm > *pn)
    swap(pm, pn);
}

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  ordina2(&a, &b);
  printf("%d %d\n", a, b);  // stampa numeri in ordine crescente
  return 0;
}