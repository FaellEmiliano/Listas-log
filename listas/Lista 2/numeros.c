#include <stdio.h>
int main(){
    int a;
    printf("Digite um numero\n");
    scanf("%i",&a);
    switch(a){
    case 1:
        printf("um");
        break;
    case 2:
        printf("dois");
        break;
    default:
        printf("Numero nada haver");
    }    

    return 0;
}