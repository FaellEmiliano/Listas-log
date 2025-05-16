#include <stdio.h>
#define s0  2
#define v0  3
#define a   10
int main()
{
    float t;
    printf("Digite o tempo[em segundo]:\n");
    scanf("%f",&t);
    printf("O resultado e: %.2f",(s0+v0*t+(1.0/2)*a*(t*t)));
    return 0;
}