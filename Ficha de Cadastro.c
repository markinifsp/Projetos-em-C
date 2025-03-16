#include <stdio.h>
int main () {

char nome [50];
int idade =0;
float altura;
float peso;

printf ("Digite seu nome: \n");
scanf ("%s" , &nome);

printf ("Digite sua idade: \n");
scanf ("%i" , &idade);

printf ("Digite sua altura: \n");
scanf ("%f" , &altura);

printf ("Digite seu peso: \n");
scanf ("%f" , &peso);


printf ("------------------------------ \n Aqui esta sua ficha de cadastro \n ------------------------------ \n nome:%s \n idade:%i \n altura:%.2f \n peso:%.2f" , nome , idade , altura , peso);






























}
