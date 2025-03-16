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

printf("RESULTADO DAS MATRIZES A E B\n");

int mresult [3][3];



for (line=0; line<=2; line++){
    for( col=0; col<=2; col++){
   mresult[line][col] = m[line][col] + ma[line][col];

    }
}
for(line=0; line<=2; line++){
for( col=0; col<=2; col++){
 printf(" %i ", mresult[line][col]);
 }
 printf("\n");
}


}



