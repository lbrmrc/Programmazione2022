#include <stdio.h>

int massimo(int a, int b) {
  if (a > b)
    return a;
  else
    return b;
  // return a > b ? a : b;
}

int massimo3(int a, int b, int c) {
  return massimo(massimo(a, b), c);
}

int massimo4(int a, int b, int c, int d) {
  // return massimo(massimo(massimo(a,b), c), d);
  //   return massimo(a, massimo3(b, c, d));
  return massimo(massimo(a, b), massimo(c, d));
}

int main() {
  int a, b, c;
  printf("inserisci tre interi\n");
  scanf("%d%d%d", &a, &b, &c);
  printf("Il massimo è %d\n", massimo3(a, b, c));
}
