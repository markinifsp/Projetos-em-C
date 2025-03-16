#include <stdio.h>
int main (){


int m[3][3];
int line=0;
int col=0;


//dados da tabela A
for(int line=0; line<=2; line++){

for(int col=0; col<=2; col++){
 printf("Informe o seu numero da matrix a \nLINHA: %i \nCOLUNA: %i\n", line+1, col+1);
 scanf("%i", &m[line][col]);
}
}
printf ("\n\n");
//Mostra a tabela A
for(int line=0; line<=2; line++){

for(int col=0; col<=2; col++){
 printf(" %i ", m[line][col]);
 }
 printf("\n");
}

int ma[3][3];

//dados da tabela B
for(int line=0; line<=2; line++){

for(int col=0; col<=2; col++){
 printf("Informe o seu numero da matrix b \nLINHA: %i \nCOLUNA: %i\n", line+1, col+1);
 scanf("%i", &ma[line][col]);
}
}
printf ("\n\n");
//Mostra a tabela B
for(int line=0; line<=2; line++){

for(int col=0; col<=2; col++){
 printf(" %i ", ma[line][col]);
 }
 printf("\n");
}

int mresult [3][3];

mresult [0][0]= m[0][0]+ma[0][0];
mresult [0][1]= m[0][1]+ma[0][1];
mresult [0][2]= m[0][2]+ma[0][2];

mresult [1][0]= m[1][0]+ma[1][0];
mresult [1][1]= m[1][1]+ma[1][1];
mresult [1][2]= m[1][2]+ma[1][2];

mresult [2][0]= m[2][0]+ma[2][0];
mresult [2][1]= m[2][1]+ma[2][1];
mresult [2][2]= m[2][2]+ma[2][2];

printf("\n\nO resultado da matrix A + matrix B: \n\n");

for(int line=0; line<=2; line++){

for(int col=0; col<=2; col++){
 printf("%i ", mresult[line][col]);
 }
 printf("\n");
}


}
