// legge da input una stringa e la stampa con le lettere minuscole sostituite
// dalle corrispondenti maiuscole

// input : Ferrara
// output: FERRARA

#include <stdio.h>

#define DIM 51

char maiuscola(char c) {
  if (c >= 'a' && c <= 'z')
    return c - ('a' - 'A');
  else
    return c;
}

int main() {
  char s[DIM];
  char c;
  int i;
  scanf("%s", s);
  i = 0;
  do {
    printf("%c\n", maiuscola(s[i]));
    i++;
  } while (s[i] != '\0');
  return 0;
}