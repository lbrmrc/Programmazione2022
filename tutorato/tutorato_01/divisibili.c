#include <stdio.h>

main(){
    int a, b;

    printf("Inserire due numeri:\n\ta: ");
    scanf("%d", &a);
    printf("\tb: ");
    scanf("%d", &b);

    if(b!=0 && a%b == 0)
        printf("%d è divisibile per %d\n",a,b);
    else if(a!= 0 && b%a == 0)
            printf("%d è divisibile per %d\n",b,a);
    else
        printf("I due numeri non sono divisibili\n");
}