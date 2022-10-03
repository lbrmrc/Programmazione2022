#include <stdio.h>

main(){
    int a;

    printf("Inserire un numero intero da tastiera: ");
    scanf("%d", &a);

    if(a%2 == 0)
        printf("Il numero inserito è pari\n");
    else
        printf("Il numero inserito è dispari\n");
}