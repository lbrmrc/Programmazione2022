#include <stdio.h>
#define DIM 100

void stampa_asterischi(int n){
    int i;
    printf("%d",n);
    for(i=0;i<n; i++){
        printf("*");
    }
    printf("\n");

}
int main(){
    int a[DIM];
    int N,i;

//controlla con do/while o if
    printf("Inserire N:\n");
    scanf("%d",&N);

    printf("Inserire numeri\n");
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<N;i++){
        printf("Elemento %d:\t",i+1);
        stampa_asterischi(a[i]);
    }

}