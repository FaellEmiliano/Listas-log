#include <stdio.h>
int main()
{
    float D;
    printf("Digite um valor em Dolares:\n");
    scanf("%f",&D);
    printf("O valor em Reais e %.2f",D*2.4);
    return 0;
}