#include <stdio.h>

int main()
{
	float a[4],t;int c,c2;
	for(c=0;c<=3;c++)
	{
		printf("Digite a nota %i: ",c+1);
		scanf("%f",&a[c]);
	}
	for(c=0;c<=2;c++)
	{
		for(c2=c+1;c2<=3;c2++)
		{
			if(a[c]>a[c2])
			{
				t = a[c];
				a[c] = a[c2];
				a[c2] = t;
			}
		}
	}
	for(c=0;c<=3;c++)
	{
		printf(" [%f] ",a[c]);
	}
}
