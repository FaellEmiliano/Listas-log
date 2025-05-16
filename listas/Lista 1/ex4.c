#include <stdio.h>
int main()
{
    int l1,l2;
    printf("Entre com a largura e o comprimento do retangulo:\n");
    scanf("%i %i",&l1,&l2);
    printf("A area dele e: %i\nO perimetro dele e: %i",l1*l2,l1*2+l2*2);
    return 0;
}