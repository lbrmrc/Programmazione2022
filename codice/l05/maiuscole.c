#include <stdio.h>

char toUppercase(char c) {
  if (c >= 'a' && c <= 'z')
    return c - ('a' - 'A');
  else
    return c;
}

int main() {
  char c;
  do {
    scanf("%c", &c);
    printf("%c", toUppercase(c));
  } while (c != '\n');
  return 0;
}