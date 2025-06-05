#include <stdio.h>

int main()
{
	int a[8],b[8],c,c2,d,pesq,pos=9;
	for(c=0;c<=7;c++)
	{
		printf("Digite o digito %i: ",c+1);
		scanf("%i",&a[c]);
	}
	for(c=0;c<=7;c++)
	{
		b[c] = a[c]*5;
	}
	for(c=0;c<=6;c++)
	{
		for(c2=c+1;c2<=7;c2++)
		{
			if(b[c2]<b[c])
			{
			d = b[c];
			b[c] = b[c2];
			b[c2] = d;
			}
				
		}
	}
	for(c=0;c<=7;c++)
	{
		printf(" [%i] ",b[c]);
	}
	printf("\n");
	printf("digite um elemento para pesquisa: ");
	scanf("%i",&pesq);
	for(c=0;c<=7;c++)
	{
		if(b[c] == pesq)
		{
			pos = c;
		}
	}
	if(pos==9)
	{
		printf("Não foi encontrado! \n");
	}
	else
	{
		printf("O digito %i foi encontrado na posição: %i",pesq,pos+1);
	}
	
}
