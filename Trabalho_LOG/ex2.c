#include <stdio.h>

int main() {
    int N1, N2;
    int quociente = 0;
    int resto;
    int aux;

    printf("Insira o dividendo (numero a ser dividido):\n");
    scanf("%d", &N1);
    printf("Insira o divisor:\n");
    scanf("%d", &N2);
    for (aux = N1; aux >= N2; aux -= N2) {
        quociente++;
    }
    resto = aux;
    printf("O quociente entre %d e %d é %d e o resto é %d\n", N1, N2, quociente, resto);
    return 0;
}