#include <stdio.h>
int main (){


int m[3][3];
int line=0;
int col=0;

for(int line=0; line<=2; line++){

for(int col=0; col<=2; col++){
 printf("Informe o seu numero da \nLINHA: %i \nCOLUNA: %i\n", line+1, col+1);
 scanf("%i", &m[line][col]);
}
}
printf ("\n\n");

for(int line=0; line<=2; line++){

for(int col=0; col<=2; col++){
 printf(" %i ", m[line][col]);
 }
 printf("\n");
}


printf("\n\nA diagonal principal e: %i, %i, %i\n", m[0][0], m[1][1], m[2][2]);
printf("A diagonal secundaria e: %i, %i, %i", m[0][2], m[1][1], m[2][0]);

}
