#include <stdio.h>

int main()
{
    float ap,lp,aa,la;
    printf("Digite a altura e largura da parede:\n");
    scanf("%f %f",&ap,&lp);
    printf("Digite a altura e largura do azulejo:\n");
    scanf("%f %f",&aa,&la);
    printf("Sao necessarios %2.f de azulejos",(ap*lp)/(aa*la));
    return 0;
}