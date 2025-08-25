#include <stdio.h>
#include <math.h>

int main()
{
    int valor,nota,resto,notas[4];

    printf("Digite o valor a ser sacado: ");
    scanf("%i",&valor);
    nota = trunc(valor/50)*1000;
    notas[0] = trunc(valor/50);
    resto = valor%50;
    nota += trunc(resto/10)*100;
    notas[1] = trunc(resto/10);
    resto = valor%10;
    nota += trunc(resto/5)*10;
    notas[2] = trunc(resto/5);
    resto = valor%5;
    nota += resto;
    notas[3] = resto;
    
    printf("%i\n",nota);
    printf("%i notas de 50\n",notas[0]);
    printf("%i notas de 10\n",notas[1]);
    printf("%i notas de 5\n",notas[2]);
    printf("%i notas de 1\n",notas[3]);
    return 0;
}