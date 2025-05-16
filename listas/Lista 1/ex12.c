#include <stdio.h>
int main()
{
    float d,t;
    printf("Informe a distancia percorrida:\n");
    scanf("%f",&d);
    printf("Informe o tempo:\n");
    scanf("%f",&t);
    printf("A velocidade media e de: %.2f",d/t);
    return 0;
}