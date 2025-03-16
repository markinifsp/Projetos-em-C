#include <stdio.h>
#include <math.h>

int main (){



int na;
int nb;
int result;

printf ("escolha o um numero \n");
scanf ("%i", &na);

printf ("escolha a porcentagem \n");
scanf ("%i", &nb);

result = na * nb /100;

printf ("a porcentagem e:%i \n" , result);

}
