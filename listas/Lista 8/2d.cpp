#include <stdio.h>

int pow(int a,int b)
{
	int tot=1;
	for(int c=1;c<=b;c++)
	{
		tot = tot*a;
	}
	return(tot);
}

int main()
{
	int a,b;
	printf("Digite a base e o expoente: ");
	scanf("%i %i",&a,&b);
	printf("Resultado: %i",pow(a,b));
}
