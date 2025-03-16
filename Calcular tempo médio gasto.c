#include <stdio.h>
int main (){

float km , hr ;

printf ("digite o km \n");
scanf ("%f", &km);

printf ("tempo (hora) que foi necessario para percorrer um trajeto \n");
scanf ("%f", &hr);

float velocidade = km/hr;

printf ("Sua velocidade media foi %.2f \n" , velocidade);
}
