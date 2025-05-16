#include <stdio.h>
int main()
{
    float m,h;
    printf("Entre com o peso em kg:\n");
    scanf("%f",&m);
    printf("Entre com a altura em m:\n");
    scanf("%f",&h);
    printf("Seu IMC e %2.f",m/(h*h));
    return 0;
}