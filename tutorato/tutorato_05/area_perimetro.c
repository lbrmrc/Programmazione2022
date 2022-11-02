#include <stdio.h>

int perimetro(int a, int b, int c){
    return a+b+c;

}

float area(int a, int b, int c){
    float p = perimetro(a,b,c)/2.0;

    return p*(p-a)*(p-b)*(p-c);
}

int main(){
    int a,b,c;

    printf("Inserire 3 numeri\n");
    scanf("%d %d %d", &a,&b,&c);

    printf("Perimetro: %d\n", perimetro(a,b,c));
    printf("Area: %.2f\n", area(a,b,c));
}