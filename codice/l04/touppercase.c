#include <stdio.h>

main() {
  char c;
  do {
    scanf("%c", &c);
    printf("%c", c >= 'a' && c <= 'z' ? c - ('a' - 'A') : c);
  } while (c != '\n');
}