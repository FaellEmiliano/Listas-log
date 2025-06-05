#include <stdio.h>

int main()
{
	int a[2],b[3],d[5],c,t,c2;
	printf("Matriz A:\n");
	for(c=0;c<=1;c++)
	{
		printf("Digite o digito %i: ",c+1);
		scanf("%i",&a[c]);
	}
	printf("Matriz B:\n");
	for(c=0;c<=2;c++)
	{
		printf("Digite o digito %i: ",c+1);
		scanf("%i",&b[c]);
	}
	for(c=0;c<=4;c++)
	{
		if(c<2)
		{
			d[c] = a[c];
		}
		else
		{
			d[c] = b[c-2];
		}		
	}
	for(c=0;c<=3;c++)
	{
		for(c2=c+1;c2<=4;c2++)
		{
			if(d[c]<d[c2])
			{
				t = d[c];
				d[c] = d[c2];
				d[c2] = t;
			}
		}
	}
	for(c=0;c<=4;c++)
	{
		printf(" [%i] ",d[c]);
	}
}
