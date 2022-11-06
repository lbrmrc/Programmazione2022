#include <stdio.h>
#define DIM 5
int main(){
    int a[DIM], i, somma, aux;

    printf("Inserisci i numeri:\n");

    for(i=0;i<DIM;i++){
        do{
            scanf("%d",&aux);
            if(aux>0)
                a[i]=aux;
        }while(aux<=0);
    }
    printf("prima soluzione:\n");
    for(i=0;i<DIM;i++){
        printf("%d",a[i]);
    }

    printf("\n");
    
    printf("Inserisci i numeri:\n");
    for(i=0;i<DIM;i++){
        scanf("%d",&aux);
        while(aux<=0){
            scanf("%d",&aux);
        }
        a[i]=aux;
    }

    printf("seconda soluzione:\n");
    for(i=0;i<DIM;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}