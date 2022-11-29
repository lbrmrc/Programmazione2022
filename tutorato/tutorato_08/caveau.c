#include <stdio.h>
#define DIM 20

typedef struct {
    int valore;
    char nome[DIM];
}pietra;

void ordina(pietra a[],int n){
    int i,min,j;
    pietra p;

    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){ //cerco il minimo nell'array rimanente
            if(a[min].valore>a[j].valore){
                min=j;
            }
        }
        //swap
        p=a[i];
        a[i]=a[min];
        a[min]=a[i];
    }
}

int main(){
    pietra arrayPietre[DIM];
    int k, n;

    scanf("%d", &n);
    scanf("%d", &k);

    for(int i=0; i<n;i++){
        printf("Nome\n");
        scanf("%s", arrayPietre[i].nome);

        printf("Valore\n");
        scanf("%d", &arrayPietre[i].valore);
    }

    ordina(arrayPietre,n);

}