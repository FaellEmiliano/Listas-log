#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero:\n");
    scanf("%i",&n);
    if(n%2==0)
    {
        printf("O numero %i e par",n);
    }
    else
    {
        printf("O numero %i e impar",n);
    }
    return 0;
}