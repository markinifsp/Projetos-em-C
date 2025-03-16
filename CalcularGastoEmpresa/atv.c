#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Empresa{
    int totalSalario1;
    int totalSalario2;
    int totalSalario3;
    int totalSalario4;
    int totalSalario5;
    int totalGasto;
};

struct Empresa empresa;

void imprimirRelatorio()
{
    printf("----------Relatório----------\n");
    printf("Quantidade total pagado para gerentes: R$ %i\n", empresa.totalSalario1);
    printf("Quantidade total pagado para analistas: R$ %i\n", empresa.totalSalario2);
    printf("Quantidade total pagado para assistentes: R$ %i\n", empresa.totalSalario3);
    printf("Quantidade total pagado para estagiarios: R$ %i\n", empresa.totalSalario4);
    printf("Quantidade total pagado para desenvolvedores: R$ %i\n", empresa.totalSalario5);
    printf("O total gasto da empresa com os salarios foi: R$ %i", empresa.totalGasto = empresa.totalSalario1 + empresa.totalSalario2 + empresa.totalSalario3 + empresa.totalSalario4 + empresa.totalSalario5);
}

void lerArquivo(){
    FILE *arquivo = fopen("empresa.txt", "r");

if (arquivo == NULL)
    {
        printf("Erro ao ler arquivo");
        return 0;
    }

char linha[100];
int cargo = 0;
int salario =0;
char nome[50];

fgets(linha, 100, arquivo);

while (fgets(linha, 100, arquivo) != NULL){
int dados = sscanf(linha, "%49[^|]|%d|%d", &nome, &cargo, &salario);

printf("Seu nome:%s\nSeu Cargo:%i\nseu salario:%i\n\n\n",nome, cargo, salario);

if(cargo == 1){
    empresa.totalSalario1 +=salario;
}

else if(cargo == 2){
    empresa.totalSalario2 +=salario;
}

else if(cargo == 3){
    empresa.totalSalario3 +=salario;
}

else if(cargo == 4){
    empresa.totalSalario4 +=salario;
}

else if(cargo == 5){
    empresa.totalSalario5 +=salario;
}
}
fclose(arquivo);
}




int main()
{

lerArquivo();
imprimirRelatorio();




return 0;
}
