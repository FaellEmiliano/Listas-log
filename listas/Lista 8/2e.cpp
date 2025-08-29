#include <stdio.h>
int a[5],b[5],c,c2,d[5];

void ler1()
{
	printf("MATRIZ A:\n");
	for(c=0;c<5;c++)
	{
		printf("Digite o numero %i: ",c+1);
		scanf("%i",&a[c]);
	}
}

void ler2()
{
	printf("MATRIZ B:\n");
	for(c=0;c<5;c++)
	{
		printf("Digite o numero %i: ",c+1);
		scanf("%i",&b[c]);
	}
}

void imprimir()
{
	for(c=0;c<5;c++)
	{
		printf(" [%i] ",d[c]);
	}
}

void ordernar()
{
	int troca;
	for(c=0;c<4;c++)
	{
		for(c2=c+1;c2<5;c2++)
		{
			if(a[c]>a[c2])
			{
				troca = a[c];
				a[c] = a[c2];
				a[c2] = troca;	
			}
		}
	}
	for(c=0;c<4;c++)
	{
		for(c2=c+1;c2<5;c2++)
		{
			if(b[c]>b[c2])
			{
				troca = b[c];
				b[c] = b[c2];
				b[c2] = troca;	
			}
		}
	}
	for(c=0;c<5;c++)
	{
		d[c] = a[c]+b[c];
	}
}




int main()
{
	ler1();
	ler2();
	ordernar();
	imprimir();
}
