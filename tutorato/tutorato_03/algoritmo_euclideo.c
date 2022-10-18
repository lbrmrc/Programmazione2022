#include <stdio.h>

main(){
    int a, b, r, magg, min;

    printf("Inserire due numeri interi\n");
    scanf("%d %d",&a,&b);

    if(a>b){
        magg=a;
        min=b;
    }
    else{
        magg=b;
        min=a;
    }

    while(min!=0){
            r=magg%min;
            magg=min;
            min=r;
        }
    
    printf("mcd(%d,%d)=%d\n",a,b,magg);

}