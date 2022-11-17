#include <stdio.h>

int radice(int n) {
  int a, b;
  a = 1;
  b = n;
  while (a < b)
    if (a * a + b * b < 2 * n)
      a++;
    else
      b--;
  if (n == a * b)
    return a;
  else
    return -1;
}

int main() {
  int n;
  int a[5];
  int dl = 0;
  int i;
  printf("Inserisci un intero\n");
  scanf("%d", &n);
  do {
    n++;
    if (radice(n) != -1) {
      a[dl] = n;
      dl++;
    }
  } while (dl < 5);
  for (i = 0; i < 5; i++)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}