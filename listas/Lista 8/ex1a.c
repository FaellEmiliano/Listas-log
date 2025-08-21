#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    char endereco[200];
    char email[100];
    char telefone[50];
}cadastro;

cadastro pessoa[5] = {'\0'}; 
int c,c2;


int menu()
{
    int escolha;
    printf("-----------MENU----------\n");
    printf("[1]   Cadastrar novos usuarios\n");
    printf("[2]   Mostrar dados cadastrados\n");
    printf("[3]   Pesquisa na base de dados\n");
    printf("[4]   Classificacao por ordem alfabetica\n");
    printf("[5]   Alterar um cadastro\n");
    printf("[6]   Remover um cadastro\n");
    printf("[7]   Sair\n");
    printf("-->  ");
    scanf("%i",&escolha);
    getchar();
    return(escolha);
}



void limpar(char *nome)
{
    nome[strcspn(nome,"\n")] = '\0';
}

void cadastrar(cadastro *p)
{
    printf("Nome: ");
    fgets(p->nome,50,stdin);
    limpar(p->nome);
    printf("Endereco: ");
    fgets(p->endereco,200,stdin);
    limpar(p->endereco);
    printf("E-mail: ");
    fgets(p->email,100,stdin);
    limpar(p->email);
    printf("Telefone: ");
    fgets(p->telefone,50,stdin);
    limpar(p->telefone);
}

void imprimir(cadastro p, int id)
{
    printf("CADASTRO %i\n",id+1);
    if(strlen(p.nome)>0)
    {
        printf("Nome:     %s\n",p.nome);
        printf("Endereco: %s\n",p.endereco);
        printf("E-Mail:   %s\n",p.email);
        printf("Telefone: %s\n\n",p.telefone);
    }
    else printf("_________VAZIO__________\n\n");
    
   
}

void pesquisa()
{
    char pesq[100];
    int pos=-1;
    printf("Digite um nome para pesquisar: \n");
    fgets(pesq,100,stdin);
    limpar(pesq);
    for(c=0;c<5;c++)
    {
        if(strcmp(pesq,pessoa[c].nome)==0)
        {
            pos = c;
        }
    }
    if(pos>-1)
    {
        printf("Cadastro encontrado na posicao %i\n\n",pos+1);
        imprimir(pessoa[pos],pos);
    }
    else
    {
        printf("CADASTRO NAO ENCONTRADO!\n");
    }
}

void ordenar()
{
    cadastro troca;
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

void alterar()
{
    printf("Cadastros ativos:\n");
    for(c=0;c<5;c++)
    {
        if(strlen(pessoa[c].nome)>0){
        printf("CADASTRO %i: %s\n",c+1,pessoa[c].nome);}
        else{
            printf("CADASTRO %i: VAZIO\n",c+1);}
    }
    char pesq[100];
    int pos=-1;
    printf("Digite o nome do cadastro para alterar: \n");
    fgets(pesq,100,stdin);
    limpar(pesq);
    for(c=0;c<5;c++)
    {
        if(strcmp(pesq,pessoa[c].nome)==0)
        {
            pos = c;
        }
    }
    if(pos>-1)
    {
        printf("CADASTRO ANTIGO: \n");
        imprimir(pessoa[pos],pos);
        printf("CADASTRO NOVO: \n");
        cadastrar(&pessoa[pos]);
    }
    else
    {
        printf("CADASTRO NAO ENCONTRADO!\n");
    }

}

void remover()
{
    int a;
    printf("Cadastros ativos:\n");
    for(c=0;c<5;c++)
    {
        if(strlen(pessoa[c].nome)>0){
        printf("CADASTRO %i: %s\n",c+1,pessoa[c].nome);}
        else{
            printf("CADASTRO %i: VAZIO\n",c+1);}
    }
    printf("Digite o numero do cadastro para remover: \n");
    scanf("%i",&a);
    if(a-1>=0)
    {
        memset(&pessoa[a-1],0,sizeof(cadastro));
    }
    else
    {
        printf("CADASTRO NAO ENCONTRADO!\n");
    }
}

int main()
{
    while(1)
    {
        switch(menu())
        {
            case 1:
                system("cls");
                printf("-----CADASTRO DE USUARIOS-----\n");
                for(c=0;c<5;c++)
                {
                    printf("CADASTRO %i:\n",c+1);
                    cadastrar(&pessoa[c]);
                }
                break;
            case 2:
                system("cls");
                printf("-----LISTA DE CADASTROS-----\n");
                for(c=0;c<5;c++)
                {
                    imprimir(pessoa[c],c);
                }
                break;
            case 3:
                system("cls");
                printf("-----PESQUISA POR NOME-----\n");
                pesquisa();
                break;
            case 4:
                system("cls");
                printf("-----ORDEM ALFABETICA-----\n");
                ordenar();
                for(c=0;c<5;c++)
                {
                    imprimir(pessoa[c],c);
                }
                break;
            case 5:
                system("cls");
                printf("-----ALTERAR CADASTRO-----\n");
                alterar();
                break;
            case 6:
                system("cls");
                printf("-----REMOVER CADASTRO-----\n");
                remover();
                break;
            case 7:
                return 1;
                break;
            
        }
    }
    return 0;
}
