#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Digite A:\n");
    scanf("%i",&a);
    printf("Digite B:\n");
    scanf("%i",&b);
    c=a;
    a=b;
    b=c;
    printf("A = %i\nB = %i",a,b);
    return 0;
}