#include <math.h>
#include <stdio.h>

float media(float y, float z) {
  return (y + z) / 2;
}

float radq(float a) {
  float x;  // accumulatore
  x = 1.0;
  while (fabsf(x * x - a) / a > 1e-5)
    x = media(x, a / x);  // media
  return x;
}

int main(void) {
  float a;
  printf("Digita un numero\n");
  scanf("%f", &a);
  if (a <= 0) {
    printf("%f e` negativo o nullo\n", a);
    return -1;
  }
  printf("La radice quadrata di %.2f e` circa %f\n", a, radq(a));
  return 0;
}