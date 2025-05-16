#include <stdio.h>

int main()
{
    int cont=1;
    while(cont<=20)
    {
        if(cont%2==0)
        {
            printf("%i e par\n",cont);
        }
        else
        {
            printf("%i e impar\n",cont);
        }
        cont++;
    }
    return 0;
}