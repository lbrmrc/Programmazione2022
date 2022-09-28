#include <stdio.h>

main() {
  int lato;
  int area;
  int perimetro;
  printf("Inserisci il lato\n");
  scanf("%d", &lato);
  perimetro = 4 * lato;
  printf("perimetro = %d\n", perimetro);
  area = lato * lato;
  printf("area = %d\n", area);
}