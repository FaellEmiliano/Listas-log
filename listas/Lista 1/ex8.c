#include <stdio.h>

int main()
{
    float n1,n2,n3,n4;
    printf("Digite quatro notas: ");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    printf("A media e %2.f",(n1+n2+n3+n4)/4);
    return 0;
}