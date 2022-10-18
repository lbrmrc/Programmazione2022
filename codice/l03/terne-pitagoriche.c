#include <stdio.h>

main() {
  int m;
  int a, b, c;
  int cont;
  printf("Inserisci l'ipotenusa massima\n");
  scanf("%d", &m);
cont = 0;
  for (a = 1; a <= m; a++)
    for (b = a + 1; b <= m; b++)
      for (c = b + 1; c <= m; c++) {
        cont++;
        if (a * a + b * b == c * c)  // la terna è pitagorica
          printf("%d %d %d\n", a, b, c);
      }
      printf("%d terne testate\n", cont);
}