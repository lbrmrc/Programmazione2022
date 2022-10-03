#include <stdio.h>

main(){
    int r, c;

    printf("Inserire la riga:\n");
    scanf("%d", &r);

    printf("Inserire la colonna:\n");
    scanf("%d", &c);

    if(r>8 || r<0 || c>8 || c<0)
        printf("Le coordinate inserite non corrispondono a punti sulla scacchiera\n");
    else{
        //condizione affinchè la casella sia bianca: riga e colonna devono essere entrambi pari o entrambi dispari
        if((r%2==0 && c%2==0)||(r%2!=0 && c%2!=0))
            printf("Casella bianca\n");
        else
            printf("Casella nera\n");
    }

}