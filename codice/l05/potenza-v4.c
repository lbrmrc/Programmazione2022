#include <stdio.h>

float potenza(float base, int esp) {
  int i;
  float prod = 1.0;
  if (esp > 0) {
    for (i = 0; i < esp; i++) {
      prod = prod * base;
    }
  } else {
    for (i = 0; i > esp; i--) {
      prod = prod / base;
    }
  }
  return prod;
}

int main() {
  int e;
  float b;
  printf("inserisci base reale ed esponente \n");
  scanf("%f%d", &b, &e);
  printf("%f\n", potenza(b, e));
  return 0;
}