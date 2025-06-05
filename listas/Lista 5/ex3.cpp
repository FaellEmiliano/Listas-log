#include <stdio.h>

int main()
{
	int a[15],b[15],c,c2,c_fat,d;
	for(c=0;c<=14;c++)
	{
		printf("Digite o digito %i: ",c+1);
		scanf("%i",&a[c]);
	}
	for(c=0;c<=14;c++)
	{
		b[c] = a[c];
		for(c_fat = 1;c_fat<a[c];c_fat++)
		{
			b[c] = b[c]*c_fat;
		}
	}
	for(c=0;c<=13;c++)
	{
		for(c2=c+1;c2<=14;c2++)
		{
			if(b[c2]<b[c])
			{
			d = b[c];
			b[c] = b[c2];
			b[c2] = d;
			}
				
		}
	}
	for(c=0;c<=14;c++)
	{
		printf(" [%i] ",b[c]);
	}
	printf("\n");
	return 0;
}
