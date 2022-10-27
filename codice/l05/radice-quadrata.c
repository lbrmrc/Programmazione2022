#include <math.h>
#include <stdio.h>

// ... media ...

float radq (float a) {
  float x; // accumulatore
  x = 1.0;
  while (fabsf(x * x - a) / a > 1e-5)
    x = (x + a / x) / 2;
  return x;
}


int main(void) {
  float a, x;
  printf("Digita un numero\n");
  scanf("%f", &a);
  if (a <= 0) {
    printf("%f e` negativo o nullo\n", a);
    return -1;
  }
  printf("La radice quadrata di %.2f e` circa %f\n", a, radq(a));
  return 0;
}