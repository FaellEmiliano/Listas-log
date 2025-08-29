#include <stdio.h>
int a[5],b[5],c,d[10];

void ler1()
{
	for(c=0;c<5;c++)
	{
		printf("Digite o numero %i: ",c+1);
		scanf("%i",&a[c]);
	}
}

void ler2()
{
	for(c=0;c<5;c++)
	{
		printf("Digite o numero %i: ",c+1);
		scanf("%i",&b[c]);
	}
}

void juncao(int a[], int b[])
{
	for(c=0;c<10;c++)
	{
		if(c<5)
		{
			d[c]=a[c];
		}
		else
		{
			d[c]=b[c-5];
		}
	}
}
void imprimir()
{
	for(c=0;c<10;c++)
	{
		printf(" [%i] ",d[c]);
	}
}

int main()
{
	printf("Matriz A:");
	ler1();	
	printf("Matriz B:");
	ler2();	
	juncao(a,b);
	imprimir();
	
}
