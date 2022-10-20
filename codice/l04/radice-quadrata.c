#include <math.h>
#include <stdio.h>

main() {
  float a;
  float x;
  scanf("%f", &a);
  x = 1.0;
  while (fabsf(x * x - a) / a > 1e-5) {
    x = (x + a / x) / 2.0;
  }
  printf("%f\n", x);
}