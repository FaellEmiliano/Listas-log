#include <stdio.h>

int main()
{
    int a[20],b[10],c,c2;
    for (c=0;c<20;++c)
    {
        while(1)
        {
            printf("Digite o número %i: ",c+1);
            scanf("%i",&a[c]);
            if(a[c]<=9&&a[c]>=0)
            {
                break;
            }
            else
            {
                printf("Digite um número entre 0 e 9 !!!\n");
            }
        }
        
    }
    for(c=0;c<20;++c)
    {
        if(c==0)
        {
            for(c2=0;c2<10;++c2)
            {
                b[c2] = 0;
            }
        }
        b[a[c]]++;
    }

    for(c=0;c<10;++c)
    {
        printf("O numero %i pareceu %i vezes\n",c,b[c]);
    }
}