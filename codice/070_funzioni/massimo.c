#include <stdio.h>

int massimo(int a, int b) {
  if (a > b)
    return a;
  else
    return b;
  // return a > b ? a : b;
}

int main() {
  int a, b;
  printf("inserisci due interi\n");
  scanf("%d%d", &a, &b);
  printf("Il massimo è %d\n", massimo(a, b));
}
