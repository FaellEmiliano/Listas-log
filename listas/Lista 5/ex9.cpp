#include <stdio.h>
#include <string.h>

int main()
{
	char a[5][80],troca[80];
	int c,c2,flag=-1;
	for(c=0;c<5;++c)
	{
		printf("Digite o nome %i: ",c+1);
		fgets(a[c],80,stdin);
	}

	for(c=0;c<4;++c)
	{
		for(c2=c+1;c2<5;++c2)
		{
			if(strcmp(a[c],a[c2])>0)
			{
				strcpy(troca,a[c]);
				strcpy(a[c],a[c2]);
				strcpy(a[c2],troca);
			}
		}
	}
	for(c=0;c<5;++c)
	{
		printf("%s",a[c]);
	}
	printf("Digite um nome para pesquisa: ");
	fgets(troca,80,stdin);
	for(c=0;c<5;++c)
	{
		if(strcmp(a[c],troca)==0)
		{
			flag = c;
		}
	}
	if(flag==-1)
	{
		printf("Nome nao encontrado!");
	}
	else
	{
		printf("Nome encontrado na posição %i",flag+1);
	}
	return 0;
}
