#include <stdio.h>
#include <string.h>
#define tam 200


int main()
{
    char frase[tam+1],palavra_atual[tam],palavra_maior[tam];
    int c,tamanho_atual=0,tamanho_maior=0;
    printf("Digite uma frase(ate 200 caracteres!): ");
    fgets(frase,200,stdin);
    for(c=0;frase[c]!='\n';++c)
    {
        if(frase[c]!=' ')
        {
            palavra_atual[tamanho_atual] = frase[c];
            tamanho_atual +=1;
        }
        else
        {
            palavra_atual[tamanho_atual] = '\0';
            palavra_maior[tamanho_maior] = '\0';
            if(tamanho_maior==0)
            {
                tamanho_maior = tamanho_atual;
                strcpy(palavra_maior,palavra_atual);
            }
            if(tamanho_atual>tamanho_maior)
            {
                tamanho_maior = tamanho_atual;
                strcpy(palavra_maior,palavra_atual);
            }
            printf("A palavra %s tem %i letra(s)\n",palavra_atual,tamanho_atual);
            memset(palavra_atual,0,sizeof(palavra_atual));
            tamanho_atual=0;
        }
    }
    if(tamanho_atual>tamanho_maior)
            {
                tamanho_maior = tamanho_atual;
                strcpy(palavra_maior,palavra_atual);
            }
    printf("A palavra %s tem %i letra(s)\n",palavra_atual,tamanho_atual);
    printf("A maior palavra e: %s\n",palavra_maior);
    return 0;
}