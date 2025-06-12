#include <stdio.h>

int main()
{
	int a[7],b[7],d[7][2],c,c2;
	printf("MATRIZ A:\n");
	for(c=0;c<7;++c)
	{
		printf("Digite o numero %i: ",c+1);
		scanf("%i",&a[c]);
	}
	printf("MATRIZ B:\n");
	for(c=0;c<7;++c)
	{
		printf("Digite o numero %i: ",c+1);
		scanf("%i",&b[c]);
	}
	for(c=0;c<2;++c)
	{
		for(c2=0;c2<7;++c2)
		{
			if(c==0)
			{
				d[c2][c] = a[c2];
			}
			else
			{
				d[c2][c] = b[c2];
			}
		}
	}
	for(c=0;c<2;++c)
	{
		for(c2=0;c2<7;++c2)
		{
			printf(" [%i] ",d[c2][c]);
		}
		printf("\n");
	}
	return 0;
}
