#include <stdio.h>

int main() {
    int a = 2;
    int *pa;

    pa = &a;
    a = 12;
    scanf("%d", pa);
    printf("%d\n", *pa);

}
