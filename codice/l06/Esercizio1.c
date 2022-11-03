#include <stdio.h>

float radice2(float y) {
  float a, b;
  float m, d;
  if (y > 1.0) {
    a = 1.0;
    b = y;
  } else {
    a = y;
    b = 1.0;
  }
  do {
    m = (a + b) / 2.0;
    if (m * m < y) {
      a = m;
    } else {
      b = m;
    }
    d = m * m - y;
    if (d < 0)
      d = -d;
  } while (d > 1e-5);
  return m;
}

int main() {
  float b[10];
  float x;
  int dl = 0;
  int i;

  // input: 10 float
  // b = map(radice2, filter(>0, input))

  for (i = 0; i < 10; i++) {
    scanf("%f", &x);
    if (x > 0.0) {
      // x assume i valori di filter(>0, input)
      b[dl] = radice2(x);
      dl++;
    }
  }

  // ForEach (printf, b)
  for (i = 0; i < dl; i++)
    printf("%f\n", b[i]);

  return 0;
}