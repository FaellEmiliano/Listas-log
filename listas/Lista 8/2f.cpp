#include <stdio.h>

void fibonnaci(int num)
{
	int soma,atual=1,ant=0;
	printf(" [1] ");
	for(int c=1;c<=num;c++)
	{
		soma = atual+ant;
		ant = atual;
		atual = soma;
		printf(" [%i] ",soma);
	}
}

int main()
{
	int a;
	printf("Digite um numero: ");
	scanf("%i",&a);
	fibonnaci(a);
}
