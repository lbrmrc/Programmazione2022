#include <stdio.h>

void azzera (int *p){
    *p = 0;
}

int main(){
    int a = 2;
    azzera(&a);
    printf("%d\n", a); // stampa 0
}
