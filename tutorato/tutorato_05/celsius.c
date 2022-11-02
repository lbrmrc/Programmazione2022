#include <stdio.h>

float celsiusToFahrenheit (int temperatura){
    return ((temperatura/5.0)*9 + 32);
}

float fahrenheitToCelsius (int temperatura){
    return ((temperatura-32)/9.0)*5;
}

int main(){
    int i;

    for(i=-100;i<=100;i+=10){
        printf("Celsius: %d \t Fahrenheit %.2f\n",i, celsiusToFahrenheit(i));
    }

    for(i=-100;i<=300;i+=20){
        printf("Fahrenheit: %d \t Celsius: %.2f\n", i, fahrenheitToCelsius(i));
    }
}