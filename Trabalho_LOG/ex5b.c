#include<stdio.h>

int main()
{
	float p1=37, p2=38, S=0.0;
	int div;
	for(div=1.0;div<=37.0;div++)
	{
		S+=(p1*p2)/(float)div;
		p2=p1;
		p1--;
	}
	printf("A soma da expressao eh:\n%f", S);
	return 0;
}
