#include <stdio.h>

int main()
{
	int a[5],b[5],d[5],t,c,c2;
	printf("Matriz A:\n");
	for(c=0;c<=4;c++)
	{
		printf("Digite o digito %i: ",c+1);
		scanf("%i",&a[c]);
	}
	for(c=0;c<=3;c++)
	{
		for(c2=c+1;c2<=4;c2++)
		{
			if (a[c2]<a[c])
			{
				t = a[c];
				a[c] = a[c2];
				a[c2] = t;
			}
		}
	}
	printf("Matriz B:\n");
	for(c=0;c<=4;c++)
	{
		printf("Digite o digito %i: ",c+1);
		scanf("%i",&b[c]);
	}
	for(c=0;c<=3;c++)
	{
		for(c2=c+1;c2<=4;c2++)
		{
			if (b[c2]<b[c])
			{
				t = b[c];
				b[c] = b[c2];
				b[c2] = t;
			}
		}
	}
	for(c=0;c<=4;c++)
	{
		d[c] = a[c] + b[c];
	}
	for(c=0;c<=4;c++)
	{
		printf(" [%i] ",d[c]);
	}
	return 0;
}
