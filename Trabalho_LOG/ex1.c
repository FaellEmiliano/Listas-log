#include <stdio.h>
int main(){
    int num;
    printf("Digite um número:\n");
    scanf("%d", &num);
    printf("TABUADA DO NUMERO %d\n", num);
    for(int i = 1;i<11;i++){
        printf("%d X %d = %d\n", i, num, i*num);
    }
    return 0;
}

