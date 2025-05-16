#include <stdio.h>

int main()
{
    int cont=1;
    do
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
    } while (cont<=20);
    return 0;
    
}