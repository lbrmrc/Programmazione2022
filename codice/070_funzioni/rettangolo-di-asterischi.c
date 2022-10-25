#include <stdio.h>

// stampa un numero n di asterischi
riga(int numero_colonne) {
  int j;
  for (j = 1; j <= numero_colonne; j++)
    printf("*");
  printf("\n");
}

main() {
  int m, n;
  int i;
  printf("Inserisci i numeri di righe e colonne\n");
  scanf("%d%d", &m, &n);
  for (i = 1; i <= m; i++)
    riga(n);
}
