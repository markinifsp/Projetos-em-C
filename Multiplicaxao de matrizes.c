#include <stdio.h>
int main (){

int ma[2][2]= {
{1,2},
{3,4}
};

int mb[2][2]= {
{5,6},
{7,8}
};


int mc[2][2]={0};

for(int linha=0; linha<2;linha++){
    for (int coluna=0; coluna<2;coluna++){
        for (int k=0; k<=1; k++){
        mc[linha][coluna]+= ma[linha][k]*mb[k][coluna];
}
    }
        }




 for(int linha=0; linha<2; linha++){
        for(int coluna=0; coluna<2; coluna++){
            printf("%d ", mc[linha][coluna]);
        }
        printf("\n");
    }






















}
