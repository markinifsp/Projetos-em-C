#include <stdio.h>


int main() {

int hora;


printf("informe o horario \n");
scanf ("%i", &hora);

if (hora <=12) {
    printf("Bom dia!!!! \n")
          ;
}


if ((hora >12) && (hora <= 18)) {
    printf("Boa tarde!!!! \n");
}

if ((hora >18) && (hora <= 24)) {
    printf("Boa noite!!!! \n");
}

if (hora >= 25)  {
    printf("HORARIO INVALIDO TENTE NOVAMENTE \n");

}
























}

