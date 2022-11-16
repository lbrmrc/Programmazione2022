#include <stdio.h>
#define DIM 10

int main() {
  char s1[DIM], s2[DIM];
  int i;
  scanf("%s", s1);
  i = 0;
  while (s1[i] != '\0') {
    s2[i] = s1[i];
    i++;
  }
  s2[i] = '\0';
  printf("%s\n", s2);
  return 0;
}