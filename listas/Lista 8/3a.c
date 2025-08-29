#include <stdio.h>

int somatorio(int num, int *total)
{
    *total = 0;
    for(int c=0;c<=num;c++)
    {
        *total +=c;
    }
    return (*total);
}

int main()
{
    int a;
    printf("Digite um numero: ");
    scanf("%i",&a);
    printf("%i",somatorio(a,&a));
    return 0;
}