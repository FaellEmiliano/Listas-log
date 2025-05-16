#include <stdio.h>

int main(){
    int a,b,c;
    printf("digite A:\n");
    scanf("%i",&a);
    printf("digite B:\n");
    scanf("%i",&b);
    printf("digite C:\n");
    scanf("%i",&c);
    if (a>b && a>c)
    {
        printf("O maior numero e %i\n",a);
        if (b>c)
        {
            printf("O numero do meio e %i\n",b);
            printf("O menor numero e %i\n",c);
        }
        else
        {
            printf("O numero do meio e %i\n",c);
            printf("O menor numero e %i\n",b);
        }
    }
    else
    {
        if (b>a && b>c)
        {
            printf("O maior numero e %i\n",b);
            if (a>c)
            {
                printf("O numero do meio e %i\n",a);
                printf("O menor numero e %i\n",c);
            }
            else
            {
                printf("O numero do meio e %i\n",c);
                printf("O menor numero e %i\n",a);
            }
        }
        else
        {
            printf("O maior numero e %i\n",c);
            if (b>a)
            {
                printf("O numero do meio e %i\n",b);
                printf("O menor numero e %i\n",a);
            }
            else
            {
                printf("O numero do meio e %i\n",a);
                printf("O menor numero e %i\n",b);
            }
        }
        
    }
    return 0;
}