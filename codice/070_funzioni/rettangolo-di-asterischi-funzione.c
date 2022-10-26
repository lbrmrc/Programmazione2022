#include <stdio.h>

// stampa un numero n di asterischi
void riga(int numero_colonne) {
  int j;
  for (j = 1; j <= numero_colonne; j++)
    printf("*");
  printf("\n");
}

void rettangolo(int nr, int nc) {  // stampa un rettangolo di nr x nc asterischi
  int i;
  for (i = 1; i <= nr; i++)
    riga(nc);
}

int main() {
  int m, n;
  printf("Inserisci i numeri di righe e colonne\n");
  scanf("%d%d", &m, &n);
  rettangolo(m, n);
  return 0;
}
