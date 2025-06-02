#include <stdio.h>

int main()
{
    int x[9],y[9],c;
    for(c=0;c<=8;c++)
    {
        printf("Digite o digito %i: ",c+1);
        scanf("%i",&x[c]);
    }
    y[0] = x[0];
    y[1] = x[1];
    y[2] = x[7];
    y[3] = x[6];
    y[4] = x[4];
    y[5] = x[5];
    y[6] = x[2];
    y[7] = x[3];
    y[8] = x[8];
    for(c=0;c<=8;c++)
    {
        printf(" [%i] ",y[c]);
    }
    return 0;
}