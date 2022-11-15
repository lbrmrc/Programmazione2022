#include <stdio.h>
#define DIM 10
#define DIM_DOPPIO 20

int main(){
    int a[DIM], b[DIM], i;
    int dla, dlb, dlc; //dimensione logica
    int ia=0, ib=0, ic; //indici
    int c[DIM_DOPPIO];

    int controllo=1;

    //inserimento di valori nell'array a
    do{
        printf("Inserisci la dimensione logica di a:\n");
        scanf("%d", &dla);
    }while(dla>DIM);

    printf("Inserire i valori\n");
    for(i=0;i<dla; i++){
        scanf("%d",&a[i]);
    }

    //inserimento di valori nell'array b
    do{
        printf("Inserisci la dimensione logica di b:\n");
        scanf("%d", &dlb);
    }while(dlb>DIM);
    printf("Inserire i valori\n");
    for(i=0;i<dlb; i++){
        scanf("%d",&b[i]);
    }

//controllo  array a
    for(i=1;i<dla&&controllo;i++){
        if(a[i]<a[i-1]){
            controllo=0;
        }
    }
//controllo  array b
    for(i=1;i<dlb&&controllo;i++){
        if(b[i]<b[i-1]){
            controllo=0;
        }
    }
    
    if(!controllo){
        printf("Errore\n");
    }
    else{ //merge ordinato
        dlc=dla+dlb;

        for(ic=0;ic<dlc&&ia<dla&&ib<dlb;ic++){
            if(a[ia]<b[ib]){
                c[ic]=a[ia];
                ia++;
            }else{
                c[ic]=b[ib];
                ib++;
            }
        }

        if(ia<dla){
            for(i=ia;i<dla;i++){
                c[ic]=a[i];
                ic++;
            }
        }else{
            for(i=ib;i<dlb;i++){
                c[ic]=b[i];
                ic++;
        }
        }

    for(i=0;i<dlc;i++){
        printf(" %d ",c[i]);
    }


    }
    
    return 0;
}