#include <stdio.h>

main(){
    int d1, d2, n1, n2;

    printf("Inserire il numeratore ed il denominatore della prima frazione:\n");
    scanf("%d%d", &n1,&d1);

    printf("Inserire il numeratore ed il denominatore della seconda frazione:\n");
    scanf("%d%d", &n2,&d2);

    if(d1!=0 && d2!=0){
        if(n1*d2 == n2*d1)
            printf("Le due frazioni sono equivalenti\n");
        else
            printf("Le due frazioni non sono equivalenti\n");
    }
    else
        printf("I denominatori devono essere diversi da zero\n");
}