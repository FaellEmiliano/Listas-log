#include <stdio.h>

int soma(int a)
{
	int soma=0;
	for(int c=0;c<=a;c++)
	{
		soma+=c;
	}
	return(soma);
}


int main()
{
	int b;
	printf("Digite um numero: ");
	scanf("%i",&b);
	printf("somatorio: %i",soma(b));
	return 0;
	
}
