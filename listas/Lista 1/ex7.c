#include <stdio.h>
#define pi 3.141592
int main()
{
    int r;
    printf("Insira o raio:\n");
    scanf("%i",&r);
    printf("O volume e de: %f \nA area da superficie e de: %f",(4.0/3)*pi*(r*r*r),4*pi*(r*r));
    return 0;
}