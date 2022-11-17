#include <stdio.h>
#include <stdlib.h>

int rnd_int(int a, int b) {
  return a + rand() % (b - a + 1);
}

int main(){
    int i;
    for (i =0; i < 20; i++)
        printf("%d\n", rnd_int(0,30));
    printf("-1\n");
}