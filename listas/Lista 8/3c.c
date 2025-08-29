#include <stdio.h>




void calc(int v, int tax, int tempo, float *p)
{
	*p=v+(v*((float)tax/100)*tempo);
	
}

int main()
{
	int v,tax,tempo;
    float p;
	printf("Digite o valor, a taxa e o tempo respectivamente: ");
	scanf("%i %i %i",&v,&tax,&tempo);
	calc(v,tax,tempo,&p);
    printf("%f",p);
}
