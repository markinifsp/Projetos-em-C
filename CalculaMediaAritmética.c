#include <stdio.h>

int main() {
 int n1[4] = {1,2,3,4};
 float media = 0;

 for(int i=0; i <= 3; i++) {

    printf("Digite o numero %i do primeiro vetor:\n", n1[i]);
    scanf("%i", &n1[i]);

    media += n1[i];

 }

    media = media / 4;

    printf("A media desses numeroes e de: %.2f", media);

}
