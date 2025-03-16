#include <stdio.h>
int main (){

float p , a;



printf ("Digite seu peso \n");
scanf ("%f" , &p);

printf ("Digite sua altura \n");
scanf ("%f" , &a);


float imc=  p / (a * a);
printf ("Seu imc e: %.2f \n" , imc);

if (imc < 18.5) {
        printf("Abaixo do peso normal.\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Peso normal.\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Sobrepeso.\n");
    } else {
        printf("Obesidade.\n");
    }
    }



























