#include <stdio.h>

main(){
    int x1, y1, x2, y2, x3, y3;

    printf("Inserire le coordinate dei tre punti: \n");
    printf("\tPrimo punto:\n");
    scanf("%d %d", &x1, &y1);
    printf("\tSecondo punto:\n");
    scanf("%d %d", &x2, &y2);
    printf("\tTerzo punto:\n");
    scanf("%d %d", & x3, &y3);

    // casi di vittoria
    // rispettivamente diagonale AltoSx-BassoDx || Fila Orizzontale || Fila Verticale || Digonale AltoDX - BassoSx
    if((x1==y1 && x2==y2 && x3==y3)||(x1==x2 && x2==x3)||(y1==y2 && y2==y3)||(x1+y1==4 && x2+y2==4 && x3+y3==4)) 
        printf("VITTORIA!\n");

    else
        printf("Nessuna vittoria");

}