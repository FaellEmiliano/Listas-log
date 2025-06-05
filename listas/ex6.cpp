#include <stdio.h>

int main()
{
	int a[3],b[3],c,pesq,pos=-1;
	for(c=0;c<=2;c++)
	{
		printf("Digite o numero %i: ",c+1);
		scanf("%i",&a[c]);
	}
	for(c=0;c<=2;c++)
	{
		b[c] = a[c] * a[c];
	}
	for(c=0;c<=2;c++)
	{
		printf(" [%i] ",b[c]);
	}
	printf("\nDigite um numero para pesquisa: ");
	scanf("%i",&pesq);
	for(c=0;c<=2;c++)
	{
		if (pesq == b[c])
		{
			pos = c;
		}
	}
	if(pos == -1)
	{
		printf("Numero nao encontrado!");
	}
	else
	{
		printf(" o %i esta na posicao %i",pesq,pos+1);
	}
	return 0;
}
