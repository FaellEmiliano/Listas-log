#include <stdio.h>
float p;



void calc(int v, int tax, int tempo)
{
	p=v+(v*(tax/100)*tempo);
	printf("%f",p);
}

int main()
{
	int v,tax,tempo;

	printf("Digite o valor, a taxa e o tempo respectivamente: ");
	scanf("%i %i %i",&v,&tax,&tempo);
	calc(v,tax,tempo);
}
