#include <stdio.h>
int main(){
    int c;
    printf("Digite o numero de um curso[1 a 5]\n");
    scanf("%i",&c);
    switch (c)
    {
    case 1:
        printf("Engenharia");
        break;
    case 2:
        printf("Edificacoes");
        break;
    case 3:
        printf("Sistemas eletricos");
        break;
    case 4:
        printf("Turismo");
        break;
    case 5:
        printf("Analise de Sistemas");
        break;
    default:
        printf("Numero invalido");
        break;
    }
    return 0;
}