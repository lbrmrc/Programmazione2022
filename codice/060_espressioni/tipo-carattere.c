#include <stdio.h>

main() {
  char carattere;
  scanf("%c", &carattere);
  // se carattere è una lettera maiuscola...
  if (carattere >= 'A' && carattere <= 'Z')
    printf("%c e` una maiuscola\n", carattere);
  // altrimenti se è una lettera minuscola
  else if (carattere >= 'a' && carattere <= 'z')
    printf("%c e` una lettera minuscola\n", carattere);
  // altrimenti se è una cifra
  else if (carattere >= '0' && carattere <= '9')
    printf("%c e` una cifra\n", carattere);
  // altrimenti sarà un altro tipo di carattere
  else
    printf("Il carattere inserito e` di altro tipo\n");
}