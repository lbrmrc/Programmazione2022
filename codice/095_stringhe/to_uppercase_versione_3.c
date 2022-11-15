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
  char s2[DIM];
  char c;
  int i;
  scanf("%s", s);
  i = 0;
  do {
    s2[i] = maiuscola(s[i]);
    i++;
  } while (s[i] != '\0');
  s2[i] = '\0';
  printf("%s\n", s2);
  return 0;
}