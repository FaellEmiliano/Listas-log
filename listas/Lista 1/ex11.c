#include <stdio.h>

int main()
{
    int a,b;
    printf("Digite A:\n");
    scanf("%i",&a);
    printf("Digite B:\n");
    scanf("%i",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A = %i\nB = %i",a,b);
    return 0;
}