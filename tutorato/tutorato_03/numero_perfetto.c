#include <stdio.h>

main(){
    int div_sum,i,j;

    div_sum=0;

    for(i=2;i<1000;i++){

        for(j=1;j<=i/2;j++){
            if(i%j==0)
                div_sum = div_sum+j;
        }

        if(div_sum == i)
            printf("%d è un numero perfetto\n",i);
       // else
       //     printf("%d non è un numero perfetto\n",i);
        div_sum=0;
    }

}