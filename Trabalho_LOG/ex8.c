#include<stdio.h>

int main()
{
	float mai, jun, jul, atual, met_econ, med, per_dent, per_fora;
	int tot=0, dent=0, fora=0;
	char cont;
	
	do
	{
	printf("Digite o seu consumo de energia de maio de 2006:\n");
	scanf("%f", &mai);
	printf("Digite o seu consumo de energia de junho de 2006:\n");
	scanf("%f", &jun);
	printf("Digite o seu consumo de energia de julho de 2006:\n");
	scanf("%f", &jul);
	med=(mai+jun+jul)/3.0;
	met_econ=med*0.8;
	printf("Digite o seu consumo de energia do mês atual:\n");
	scanf("%f", &atual);
	tot++;
	if(atual<=met_econ)
	{
		dent++;
		printf("Consumidor dentro da meta\n");
	}
	else
	{
		fora++;
		printf("Consumidor fora da meta\n");
	}
	printf("Deseja continuar: (S/N)\n");
	scanf(" %c", &cont);
	} while(cont == 'S' || cont == 's');
	
	{
		per_dent=(dent*100)/tot;
		per_fora=(fora*100)/tot;
		printf("Fechamento de Meta de Economia:\n");
		printf("A porcentagem de imoveis que atingiram a meta de economia de energia:\n%f%\n", per_dent);
		printf("A porcentagem de imoveis que nao atingiram a meta de economia de energia:\n%f%\n", per_fora);
	}
	return 0;
}
