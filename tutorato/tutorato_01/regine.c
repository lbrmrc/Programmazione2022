#include <stdio.h>

main(){
    int r1, c1, r2, c2;

    printf("Inserire le coordinate della prima regina:\n");
    scanf("%d %d",&r1,&c1);

    printf("Inserire le coordinate della seconda regina:\n");
    scanf("%d %d",&r2,&c2);  

    if(r2==r1){
        printf("Le regine sono sulla stessa riga\n");
    }  
    r2 += 1;
    if(c2==c1){
        printf("Le regine sono sulla stessa colonna\n");
    }

    if(((r1-r2)==(c1-c2)) || ((r1-r2)== -1*(c1-c2))){
        printf("Le regine sono sulla stessa diagonale\n");
    } 
    else {
        printf("Le regine non si attaccano\n");
    }

}