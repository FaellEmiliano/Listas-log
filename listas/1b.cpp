#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[50];
	float nota1;
	float nota2;
}cadastro;

cadastro aluno[3];

int menu()
{
	int escolha;
	printf("--------MENU--------\n");
	printf("[1]   Cadastrar os 20 alunos\n");
	printf("[2]   Classidicar alunos cadastrados\n");
	printf("[3]   Corrigir cadastros\n");
	printf("[4]   Pesquisa por nome\n");
	printf("[5]   Listar alunos aprovados\n");
	printf("[6]   Listar alunos reprovados\n");
	printf("[7]   sair\n");
	printf("-->   ");
	scanf("%i",&escolha);
	getchar();
	return(escolha);
}

void cadastrar(cadastro *a,int num)
{
	printf("ALUNO %i\n",num+1);
	printf("Digite o nome: ");
	fgets(a->nome,50,stdin);
	a->nome[strcspn(a->nome,"\n")] = '\0';
	printf("Digite a nota 1: ");
	scanf("%f",&a->nota1);
	getchar();
	printf("Digite a nota 2: ");
	scanf("%f",&a->nota2);
	getchar();
}

void imprimir(int c)
{
	printf("Aluno %i\n",c+1);
	printf("Nome: %s\n",aluno[c].nome);
	printf("Nota 1: %f\n",aluno[c].nota1);
	printf("Nota 2: %f\n",aluno[c].nota2);
}

void pesquisa()
{
	int pos=-1;
	char nome[50];
	printf("Digite um nome para pesquisa: ");
	fgets(nome,50,stdin);
	nome[strcspn(nome,"\n")] = '\0';
	for(int c=0;c<3;c++)
	{
		if(strcmp(nome,aluno[c].nome)==0)
		{
			pos = c;
			
		}
	}
	if(pos==-1)
	{
		printf("Nao encontrado\n");
	}
	else
	{
		printf("Encontrado na posicao %i\n",pos+1);
		imprimir(pos);
	}
	
}
void alterar()
{
    printf("Cadastros ativos:\n");
    for(int c=0;c<3;c++)
    {
        if(strlen(aluno[c].nome)>0){
        printf("CADASTRO %i: %s\n",c+1,aluno[c].nome);}
        else{
            printf("CADASTRO %i: VAZIO\n",c+1);}
    }
    char pesq[100];
    int pos=-1;
    printf("Digite o nome do cadastro para alterar: \n");
    fgets(pesq,100,stdin);
    pesq[strcspn(pesq,"\n")] = '\0';
    for(int c=0;c<3;c++)
    {
        if(strcmp(pesq,aluno[c].nome)==0)
        {
            pos = c;
        }
    }
    if(pos>-1)
    {
        printf("CADASTRO ANTIGO: \n");
        imprimir(pos);
        printf("CADASTRO NOVO: \n");
        cadastrar(&aluno[pos],pos);
    }
    else
    {
        printf("CADASTRO NAO ENCONTRADO!\n");
    }

}
void ordenar()
{
    cadastro troca;
    for(int c=0;c<2;c++)
    {
        for(int c2=c+1;c2<3;c2++)
        {
            if(strcmp(aluno[c].nome,aluno[c2].nome)>0)
			{
			troca = aluno[c];
			aluno[c] = aluno[c2];
			aluno[c2] = troca;
			}
        }
    }
}
float media(cadastro a)
{
	float m=0;
	m=(a.nota1+a.nota2)/2;
	return(m);
}

void aprovados()
{
	for(int c=0;c<3;c++)
	{
		if(media(aluno[c])>=7.0)
		{
			imprimir(c);
		}
	}
}
void reprovados()
{
	for(int c=0;c<3;c++)
	{
		if(media(aluno[c])<7.0)
		{
			imprimir(c);
		}
	}
}




int main()
{
	int c,c2;
	while(1)
	{
		switch(menu())
		{
			case 1:
				for(c=0;c<3;c++)
				{
					cadastrar(&aluno[c],c);
				}
				break;
			case 2:
                ordenar();
                for(c=0;c<3;c++)
                {
                    imprimir(c);
                }
				break;
			case 3:
                alterar();
                break;
			case 4:
				pesquisa();
				break;
			case 5:
				aprovados();
				break;
			case 6:
				reprovados();
				break;
			case 7:
				return 1;
				break;
		}
	}
}
