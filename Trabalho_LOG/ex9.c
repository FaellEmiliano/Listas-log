#include <stdio.h>

int primos(int num)
{
    int c_primos=0;
    for(int c=num;c>0;c--)
    {
        if(num%c==0)
        {
            c_primos++;
        }
    }
    if(c_primos<=2)
    {
        return 0;
    }
    else return 1;

}

int main()
{
    int a;
    printf("Digite um numero: ");
    scanf("%i",&a);
  
    printf("%i:\n",a);
    if(primos(a)==0)
    {
        printf("e primo\n");
    }
    else printf("Nao e primo\n");

    if(a%2==0)
    {
        printf("e par\n");
    }
    else printf("Nao e par\n");

    return 0;
}