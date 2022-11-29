#include <stdio.h>

void elimina_ripetuti(int v[], int *pdl) {
  int i, k;
  for (k = 0; k < *pdl; k++)
    for (i = k + 1; i < *pdl; i++) {
      if (v[k] == v[i]) {
        int j;
        for (j = i; j < *pdl - 1; j++)
          v[j] = v[j + 1];
        (*pdl)--;
      }
    }
}

int main() {
  int a[] = {4, 1, 5, 4, 6, 1};
  int dl = 6, i;
  elimina_ripetuti(a, &dl);
  for (i = 0; i < dl; i++)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}