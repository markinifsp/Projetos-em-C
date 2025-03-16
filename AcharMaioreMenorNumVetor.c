#include <stdio.h>
#include <string.h>

int main() {

    int n1[] = {10,7,12,41,3,1};
    int maior,menor;

    for(int i=0;i<=5;i++) {

        if(maior < n1[i]) {
            maior = n1[i];
        }
        if(menor > n1[i]) {
            menor = n1[i];
        }




    }
 printf("Maior: %i\nMenor %i", maior, menor);
}
