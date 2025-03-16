#include <stdio.h>
#include <string.h>

int main() {
    srand(time(NULL));

    int n[100];


    for(int i=0;i<=100;i++) {
        n[i] = rand() % 1000;
    }

    printf("Os numeros sao:\n");
        for(int i=0;i<=100;i++) {
            printf("%i\n", n[i]);
        }



}
