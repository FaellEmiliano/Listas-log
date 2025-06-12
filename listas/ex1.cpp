#include <stdio.h>

main ()
{
	int a[5][3], b[5][3],d[5][3],c,c2;
	printf("MATRIZ A:\n");
	for(c=0;c<3;++c)
	{
		for(c2=0;c2<5;++c2)
		{
			printf("Digite o numero da pos %i %i: ",c2,c);
			scanf("%i",&a[c2][c]);
		}
	}
	for(c=0;c<3;++c)
	{
		for(c2=0;c2<5;++c2)
		{
			printf(" [%i] ",a[c2][c]);
		}
		printf("\n");
	}
	printf("MATRIZ B:\n");
	for(c=0;c<3;++c)
	{
		for(c2=0;c2<5;++c2)
		{
			printf("Digite o numero da pos %i %i: ",c2,c);
			scanf("%i",&b[c2][c]);
		}
	}
	for(c=0;c<3;++c)
	{
		for(c2=0;c2<5;++c2)
		{
			printf(" [%i] ",b[c2][c]);
		}
		printf("\n");
	}
	for(c=0;c<3;++c)
	{
		for(c2=0;c2<5;++c2)
		{
			d[c2][c] = a[c2][c] + b[c2][c];
		}
	}
	for(c=0;c<3;++c)
	{
		for(c2=0;c2<5;++c2)
		{
			printf(" [%i] ",d[c2][c]);
		}
		printf("\n");
	}
	return 0;
}
