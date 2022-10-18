#include <stdio.h>

main(){
    int n, num;
    int reversed, digit;

    printf("Inserire un numero\n");
    scanf("%d", &n);

    num =n;
    reversed = 0;

    while(num>0){
        digit = num %10;
        reversed = reversed * 10 +digit;
        num= num/10;
    }

    if(n==reversed)
        printf("%d è palindromo",n);
    else
        printf("%d non è palindromo",n);
}

