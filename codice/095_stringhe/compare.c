#include <stdio.h>
#define DIM 20
int main() {
  char s[DIM], c;
  char input[2];
  int i;
  int trovato;
  scanf("%s", s);
 
  scanf("%s", input);
  c = input[0];
 
  trovato = 0;
  i = 0;
  while (!trovato && s[i] != '\0') {
    if (s[i] == c)
      trovato = 1;
    i++;
  }

  if (trovato)
    printf("si\n");
  else
    printf("no\n");
}