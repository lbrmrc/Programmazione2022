#include <stdio.h>

int main() {
  int n;
  int a[10];
  int i;

  scanf("%d", &n);

  for (i = 0; i < 10; i++)
    a[i] = i + n + 1;
  // ForEach (printf, a)
  for (i = 0; i < 10; i++)
    printf("%d\n", a[i]);

  return 0;
}
