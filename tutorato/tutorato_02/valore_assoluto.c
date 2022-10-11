#include <stdio.h>

main(){
    int n;

    printf("Inserire il numero:\n");
    scanf("%d", &n);

    printf("Il valore assoluto di %n e' ", n);

    if(n>=0)
        printf("%d",n);
    else
        printf("%d", -n);
}