#include <stdio.h>
#define DIM 6

int main() {
  char s[DIM];
  int count;
  scanf("%s", s);
  count = 0;
  while (s[count] != '\0')
    count++;
  printf("%d\n", count);
}