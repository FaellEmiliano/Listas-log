#include <stdio.h>

int main()
{
	int a[10],b[10][3],c,c2,c_fat;
	printf("MATRIZ A:\n");
	for(c=0;c<10;++c)
	{
		printf("Digite o digito %i: ",c+1);
		scanf("%i",&a[c]);
	}
	for(c=0;c<3;++c)
	{
		for(c2=0;c2<10;++c2)
		{
			if(c==0)
			{
				b[c2][c]=a[c2]+5;
			}
			if(c==1)
			{
				b[c2][c] = a[c2];
				for(c_fat=1;c_fat<a[c2];++c_fat)
				{
					b[c2][c] = b[c2][c]*c_fat;
				}
			}
			if(c==2)
			{
				b[c2][c]=a[c2]*a[c2];
			}
		}
	}
	for(c=0;c<3;++c)
	{
		for(c2=0;c2<10;++c2)
		{
			printf(" [%i] ",b[c2][c]);
		}
		printf("\n");
	}
}
