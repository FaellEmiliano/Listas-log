#include <stdio.h>

int main()
{
	int a[4],b[4],d[4][2],c,c2;
	printf("MATRIZ A:\n");
	for(c=0;c<4;++c)
	{
		printf("Digite o numero %i: ",c+1);
		scanf("%i",&a[c]);
	}
	printf("MATRIZ B:\n");
	for(c=0;c<4;++c)
	{
		printf("Digite o numero %i: ",c+1);
		scanf("%i",&b[c]);
	}
	for(c=0;c<2;++c)
	{
		for(c2=0;c2<4;++c2)
		{
			if(c==0)
			{
				d[c2][c] = a[c2]*2;
			}
			else
			{
				d[c2][c] = b[c2] - 5;
			}
		}
	}
	for(c=0;c<2;++c)
	{
		for(c2=0;c2<4;++c2)
		{
			printf(" [%i] ",d[c2][c]);
		}
		printf("\n");
	}
	return 0;
}
