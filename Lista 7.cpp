#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef struct{
	char nome[200];
	char endereco[200];
	char telefone[200];
	int idade;
}cad;

cad pessoa[5];
cad troca;
int c,c2, id_pesq,pos,pos_reg;
char registro[200];

void formatar(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

void cadastro(cad *alvo)
{
	printf("Digite o nome da pessoa: ");
	fgets(alvo->nome,200,stdin);
	formatar(alvo->nome);
	printf("Digite o endereco da pessoa: ");
	fgets(alvo->endereco,200,stdin);
	formatar(alvo->endereco);
	printf("Digite o telefone da pessoa: ");
	fgets(alvo->telefone,200,stdin);
	formatar(alvo->telefone);
	printf("Digite a idade da pessoa ");
	scanf("%i",&alvo->idade);
	fflush(stdin);
}

void imprimir(cad p){
	printf("Nome:     %s\n",p.nome);
	printf("Endereco: %s\n",p.endereco);
	printf("Telefone: %s\n",p.telefone);
	printf("Idade:    %i\n",p.idade);
}

void ordenar()
{
	for(c=0;c<4;c++)
	{
		for(c2=c+1;c2<5;c2++)
		{
			if(strcmp(pessoa[c].nome,pessoa[c2].nome)>0)
			{
			troca = pessoa[c];
			pessoa[c] = pessoa[c2];
			pessoa[c2] = troca;
			}
		}
	}
}

void alterar_registro()
{
	printf("---ALTERAR REGISTROS---\n");
	printf("Digite o nome do registro:");
	fgets(registro,200,stdin);
	printf("Registro antigo:\n");
	for(c=0;c<5;c++)
	{
		if(strcmp(registro,pessoa[c].nome)==0)
		{
			pos_reg = c;
		}
	}
	imprimir(pessoa[pos_reg]);
	cadastro(&pessoa[pos_reg]);
}

void pesquisa_idade()
{
	printf("---PESQUISA POR IDADE---\n");
	printf("Digite uma idade:");
	scanf("%i",&id_pesq);
	for(c=0;c<2;c++)
	{
		if(pessoa[c].idade==id_pesq)
		pos = c;
	}
	imprimir(pessoa[pos]);
}

int main()
{
	while(true){
	int escolha;
	printf("---MENU AGENDA---\n\n");
	printf("Cadastro geral[1]\n");
	printf("Ordem alfabetica[2]\n");
	printf("Aterar registro[3]\n");
	printf("Ver registros[4]\n");
	printf("Pesquisa por idade[5]\n");
	printf("Sair[6]\n");
	scanf("%i",&escolha);
	system("cls");
	
	switch (escolha)
	{
		case 1: 
			fflush(stdin);
			for(c=0;c<5;c++)
			{
			printf("PESSOA %i\n",c+1);
			cadastro(&pessoa[c]);
			system("cls");
			}
		break;
		case 2:
			fflush(stdin);
			printf("---ORDEM AFABETICA---\n");
			printf("Ordenado!\n");
			ordenar();
			
		break;
		case 3:
			fflush(stdin);
			alterar_registro();
		break;
		case 4:
			fflush(stdin);
			for(c=0;c<5;c++)
			{
				printf("\n\nPESSOA %i",c+1);
				imprimir(pessoa[c]);
			}
		break;
		case 5:
			fflush(stdin);
			
		break;
		case 6:
			return 1;
		break;
	}
	}
	
	
	
	
	
	return 0;
	
	
}
