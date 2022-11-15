#include <stdio.h>
#define DIM 10

int precede(int a, int b) {  // sussiste la relazione di ordinamento fro a e b
  return a * a < b * b;
}

int main() {
  int a[DIM];
  int DL, dlo;
  int n, i;

  // input
  DL = 0;
  while (DL < DIM) {
    scanf("%d", &n);
    if (n != 0) {
      a[DL] = n;
      DL++;
    } else
      break;
  }

  for (dlo = 0; dlo < DL; dlo++) {
    int j = dlo, m = a[dlo];
    while (j > 0 && precede(m, a[j - 1])) {
      a[j] = a[j - 1];
      j--;
    }
    a[j] = m;
  }

  for (i = 0; i < DL; i++)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}