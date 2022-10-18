#include <stdio.h>

main() {
  int numero, somma = 0;
  do {
    printf("Digita un intero (negativo termina):\n");
    scanf("%d", &numero);
    if (numero < 0)
      break;
    somma += numero;
  } while (1);
  printf("La somma e` %d\n", somma);
}