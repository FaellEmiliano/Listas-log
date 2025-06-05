#include <stdio.h>

int main()
{
	int a[2],b[2],c,c2,t,pesq,pos=-1;
	for(c=0;c<=1;c++)
	{
		printf("Digite o numero %i: ",c+1);
		scanf("%i",&a[c]);
	}
	for(c=0;c<=1;c++)
	{
		b[c] = a[c]+2;
	}

	if(b[0]>b[1])
	{
		t = b[0];
		b[0] = b[1];
		b[1] = t;
	}
	for(c=0;c<=1;c++)
	{
		printf(" [%i] ",b[c]);
	}
	printf("\nDigite um numero para pesquisa: ");
	scanf("%i",&pesq);
	for(c=0;c<=1;c++)
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
