#include <stdio.h>

int main()
{
    int num,cont;
    printf("digite um numero:\n");
    scanf("%i",&num);
    for(cont=0;cont<=10;cont++)
    {
        printf("%i X %i = %i\n",num,cont,num*cont);
    }
    return 0;
}