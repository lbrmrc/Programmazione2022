#include <stdio.h>

int perfetto(int n) {
  int d;
  int s;
  d = 1;
  s = 0;
  while (d < n) {
    if (n % d == 0)
      s = s + d;
    d = d + 1;
  }
  if (s == n)
    return 1;
  else
    return 0;
}

int main() {
  int a[10];
  int dl = 0;
  int n;
  int i;
  printf("Inserisci un numero minore o uguale a 10\n");
  scanf("%d", &n);
  for (i = 1; i < n; i++)
    if (!perfetto(i)) {
      a[dl] = i * i;
      dl++;
    }
  for (i = 0; i < dl; i++)
    printf("%d\n", a[i]);
    return 0;
}