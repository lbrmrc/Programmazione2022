#include <stdio.h>

main(){
    int giorno;

    printf("Inserire il numero del giorno della settimana, da 1 a 7\n");
    scanf("%d",&giorno);

    if(giorno<1 || giorno>7)
        printf("Inserire un numero da 1 a 7\n");
        else{
        
        if (giorno==1)
            printf("Lunedì\n"); 
            
        if (giorno==2)
            printf("Martedì\n"); 
            
        if (giorno==3)
            printf("Mercoledì\n"); 
            
        if (giorno==4)
            printf("Giovedì\n"); 
            
        if (giorno==5) 
            printf("Venerdì\n"); 
            
        if (giorno==6)
            printf("Sabato\n"); 
            
        if (giorno==7)
            printf("Domenica\n");
    }
}