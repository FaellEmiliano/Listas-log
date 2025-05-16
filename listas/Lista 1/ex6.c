#include <stdio.h>
#define pi 3.141592
int main()
{
    int r;
    printf("Insira o raio:\n");
    scanf("%i",&r);
    printf("A area e de: %f\nO perimetro e: %f",pi*(r*r),2*pi*r);
    return 0;
}