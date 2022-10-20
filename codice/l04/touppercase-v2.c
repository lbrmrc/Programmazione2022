#include <stdio.h>

main() {
  char c;
  do {
    scanf("%c", &c);
    printf("%c", c - (c >= 'a' && c <= 'z') * ('a'- 'A'));
  } while (c != '\n');
}