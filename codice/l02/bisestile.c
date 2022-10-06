#include <stdio.h>

main() {
  int anno;
  printf("Inserisci un anno\n");
  scanf("%d", &anno);
  if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0))
    printf("Bisestile\n");
  else
    printf("Non bisestile\n");
}