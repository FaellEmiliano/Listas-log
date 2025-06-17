#include <stdio.h>

int main()
{
    int a[10],c,c2,troca,pesq=-1,resp;
    for(c=0;c<10;++c)
    {
        printf("Digite o numero %i: ",c+1);
        scanf("%i",&a[c]);
    }
    for(c=0;c<9;++c)
    {
        for(c2=c+1;c2<10;c2++)
        {
            if(a[c]>a[c2])
            {
                troca = a[c];
                a[c] = a[c2];
                a[c2] = troca;
            }
        }
    }
    for(c=0;c<10;c++)
    {
        printf(" [%i] ",a[c]);
    }
    printf("Digite um numero para pesquisar no vetor: ");
    scanf("%i",&resp);
    for(c=0;c<10;c++)
    {
        if(a[c] == resp)
        {
            pesq = c+1;
        }
    }
    if(pesq != -1)
    {
        printf("numero encontrado na posicao %i",pesq);
    }
    else
    printf("numero nao encontrado!");

    return 0;
}