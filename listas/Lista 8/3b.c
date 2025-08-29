#include <stdio.h>

void ler(int *a)
{
    int c;
	for(c=0;c<5;c++)
	{
		printf("Digite o numero %i: ",c+1);
		scanf("%i",&a[c]);
	}
}


void juncao(int *a, int *b,int *d)
{
    int c;
	for(c=0;c<10;c++)
	{
		if(c<5)
		{
			*d++=*a++;
		}
		else
		{
			*d++=*b++;
		}
	}
}
void imprimir(int *d)
{
    int c;
	for(c=0;c<10;c++)
	{
		printf(" [%i] ",d[c]);
	}
}

int main()
{
    int a[5],b[5],d[10];
	printf("Matriz A:\n");
	ler(a);
	printf("Matriz B:\n");
	ler(b);
	juncao(a,b,d);
	imprimir(d);
	
}