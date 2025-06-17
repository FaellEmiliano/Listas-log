#include <stdio.h>

int main()
{
    int a[15],c,c2,troca;
    for(c=0;c<15;++c)
    {
        printf("Digite o numero %i: ",c+1);
        scanf("%i",&a[c]);
    }
    for(c=0;c<14;++c)
    {
        for(c2=c+1;c2<15;++c2)
        {
            if(a[c]>a[c2])
            {
                troca = a[c];
                a[c] = a[c2];
                a[c2] = troca;
                
            }
        }
    }
    for(c=0;c<15;++c)
    {
        printf(" [%i] ",a[c]);
    }

    return 0;
}