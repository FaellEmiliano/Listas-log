#include <stdio.h>
#include <string.h>

int main()
{
    char a[200],palavra_atual[200],palavra_maior[200];
    int tamanhomaior=0,tamanhoatual=0;
    printf("Digite uma frase: ");
    fgets(a,200,stdin);
    a[strcspn(a, "\n")] = '\0';
    for(int c=0;a[c]!='\0';c++)
    {
        if(a[c] != ' ')
        {
            palavra_atual[tamanhoatual] = a[c];
            tamanhoatual++;
            
        }
        else
        {
            palavra_atual[tamanhoatual] = '\0';
            if(tamanhomaior==0)
            {
                tamanhomaior = tamanhoatual;
                strcpy(palavra_maior,palavra_atual);
            }
            
            if(tamanhoatual>tamanhomaior)
            {
                strcpy(palavra_maior,palavra_atual);
                tamanhomaior = tamanhoatual;
            }
            tamanhoatual = 0;
        }
        

    }
    palavra_atual[tamanhoatual] = '\0';
    if(tamanhoatual>tamanhomaior)
    {
        strcpy(palavra_maior,palavra_atual);
        tamanhomaior = tamanhoatual;
    }
    printf("A maior palavra e: %s com %i letras",palavra_maior,tamanhomaior);
    return 0;
}