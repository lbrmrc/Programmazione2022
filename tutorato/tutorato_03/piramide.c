#include <stdio.h>

main(){
    int rows, i, j, space;

    printf("Inserire il numero di righe\n");
    scanf("%d", &rows);

    for(i=rows; i>= 1; i--){
        for(space=0; space < rows-i; ++space)
            printf("  ");
        for(j=0; j<= 2*(i-1); ++j)
            printf("* ");
        printf("\n");
    }


}