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

void imprimir(int *d)
{
    int c;
	for(c=0;c<5;c++)
	{
		printf(" [%i] ",d[c]);
	}
}

void ordernar(int *a,int *b,int *d)
{
    int c,c2;
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
    int a[5],b[5],d[5];
	ler(a);
    ler(b);
	ordernar(a,b,d);
	imprimir(d);
}
