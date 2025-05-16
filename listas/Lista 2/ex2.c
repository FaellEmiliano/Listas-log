#include <stdio.h>
#define NC 55
int main(){
    int n,r;
    printf("Digite um numero:\n");
    scanf("%i",&n);
    r = n-NC;
    if(r<0)
        r = r*-1;
    printf("A distancia entre os dois numero e: %i",r);
    return 0;
}