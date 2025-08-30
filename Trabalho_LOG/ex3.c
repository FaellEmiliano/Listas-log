#include <stdio.h>
#include <string.h>

int main(){
    int idade;
    int pontos=0;
    char genero, utilizacao[10], garagem[10];
    printf("Digite uma idade: ");
    scanf("%i", &idade);

    if(idade<18){
        printf("Sem cobertura para menores de 18 anos\n");
        return 0;
    }
    else if(idade>=18 && idade<=23){
        pontos+=4;
    }
    else if(idade>=24 && idade<=29){
        pontos+=3;
    }   
    else if(idade>=30 && idade<=45){
        pontos+=2;
    }
    else{
        pontos+=1;
    }

    printf("Digite um genero(M/F): ");
    scanf(" %c", &genero);
    getchar();

     if(genero=='F'|| genero=='f'){
        pontos+=2;
    }
    else if(genero=='M' || genero=='m'){
        pontos+=3;
    }
    else{
        printf("Genero nao definido, e nescessario que voce informe o genero.");
        return 0;
    }
    printf("Digite a utilizacao (trabalho/lazer/ambos)");
    scanf("%s", &utilizacao);
    getchar();

    if(strcmp(utilizacao, "passeio")==0){
        pontos+=1;
    }
    else if(strcmp(utilizacao, "trabalho")==0){
        pontos+=2;
    }
    else if(strcmp(utilizacao, "ambos")==0){
        pontos+=3;
    }
    else{
        printf("Digite a utilizacao requerida.");
        return 0;
    }
    printf("Digite a garagem (sem/diurna/noturna/ambas): ");
    scanf("%s", garagem);
    getchar();
    if (strcmp(garagem, "sem") == 0) {
        pontos += 6;
    } else if (strcmp(garagem, "diurna") == 0) {
        pontos += 4;
    } else if (strcmp(garagem, "noturna") == 0) {
        pontos += 2;
    } else if (strcmp(garagem, "ambas") == 0) {
        pontos += 1;
    }
    else{printf("Informe a garagem corretamente."); return 0;}

     printf("\nTotal de pontos: %d\n", pontos);
    if (pontos <= 7) {
        printf("Classificacao: Baixo risco recebera um desconto de 10%%\n");
    } else if (pontos >= 8 && pontos <= 10) {
        printf("Classificacao: Medio risco nao havera sem alteracao\n");
    } else if (pontos >= 11 && pontos <= 14) {
        printf("Classificacao: Alto risco, recebera um acrescimo de 10%%\n");
    } else if (pontos >= 15 && pontos <= 16) {
        printf("Classificacao: Altissimo risco recebera um acrescimo de 40%%\n");
    } else {
        printf("Pontuacao invalida.\n");
    }
    return 0;

        

    }