#include <stdio.h>

int main()
{
    int cont;
    for(cont=20;cont>=1;cont--)
    {
        if(cont%2==0)
        {
            printf("%i e par\n",cont);
        }
        else
        {
            printf("%i e impar\n",cont);
        }
    }
    return 0;
}