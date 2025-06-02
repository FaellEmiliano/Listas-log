#include <stdio.h>

int main()
{
    int a[9],b[9],c;
    for(c=0;c<=8;c++)
    {
        printf("Digite o valor %i: ",c+1);
        scanf("%i",&a[c]);
    }
    for(c=2;c<=6;c++)
    {
        b[c] = a[c];
    }
    for(c=0;c<=1;c++)
    {
        b[c] = a[1-c];
    }
    for(c=0;c<=1;c++)
    {
        b[c+7] = a[8-c];
    }
    for(c=0;c<=8;c++)
    {
        printf(" [%i] ",b[c]);
    }
    return 0;
}