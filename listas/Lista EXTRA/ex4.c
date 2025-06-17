#include <stdio.h>

int main()
{
    int a[5][5],c,c2,col,lin=0;
    for(c=0;c<5;c++)
    {
        for(c2=0;c2<5;c2++)
        {
            printf("Digite o numero na posicao (%i,%i): ",c,c2);
            scanf("%i",&a[c][c2]);
        }
    }
    for(c=0;c<5;c++)
    {
        for(c2=0;c2<5;c2++)
        {
            printf(" [%i] ",a[c][c2]);
        }
        printf("\n");
    }
    for(c=0;c<5;c++)
    {
        col=0;
        for(c2=0;c2<5;c2++)
        {
            col+=a[c][c2];
        }
        printf("A soma da coluna %i e: %i\n",c,col);
    }
    for(c=0;c<5;c++)
    {
        lin=0;
        for(c2=0;c2<5;c2++)
        {
            lin+=a[c2][c];
        }
        printf("A soma da linha %i e: %i\n",c,lin);
    }
}