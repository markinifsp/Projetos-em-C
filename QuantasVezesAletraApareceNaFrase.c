#include <stdio.h>
#include <string.h>

int main() {

    char frase[100];
    char letra;
    int qntd = 0;

    printf("Escreva uma frase\n");
    fgets(frase, sizeof(frase), stdin);

    printf("\nDigite uma letra\n");
    scanf("%c", &letra);



    for(int i = 0; i < strlen(frase); i++ ) {

        if(letra == frase[i]) {
            qntd++;
        }

        else
            continue;

    }

    printf("\nA letra %c apareceu %i vezes na frase", letra, qntd);


}
