#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct {
    char nome[50];
    char email[50];
    char telefone[20];
} Contato;

void lerString(char *str, int tamanho) {
    fgets(str, tamanho, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void cadastrar(Contato agenda[], int *n) {
    if (*n >= MAX) {
        printf("Agenda cheia!\n");
        return;
    }
    printf("\n--- Cadastro de Contato ---\n");
    printf("Nome: ");
    lerString(agenda[*n].nome, sizeof(agenda[*n].nome));
    printf("Email: ");
    lerString(agenda[*n].email, sizeof(agenda[*n].email));
    printf("Telefone: ");
    lerString(agenda[*n].telefone, sizeof(agenda[*n].telefone));
    (*n)++;
}

void pesquisar(Contato agenda[], int n) {
    char nomeBusca[50];
    printf("\nDigite o nome para pesquisar: ");
    lerString(nomeBusca, sizeof(nomeBusca));

    for (int i = 0; i < n; i++) {
        if (strcmp(agenda[i].nome, nomeBusca) == 0) {
            printf("\nEncontrado:\nNome: %s\nEmail: %s\nTelefone: %s\n",
                   agenda[i].nome, agenda[i].email, agenda[i].telefone);
            return;
        }
    }
    printf("Contato não encontrado!\n");
}

void ordenar(Contato agenda[], int n) {
    Contato temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(agenda[i].nome, agenda[j].nome) > 0) {
                temp = agenda[i];
                agenda[i] = agenda[j];
                agenda[j] = temp;
            }
        }
    }
    printf("\n--- Contatos em ordem alfabética ---\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %s - %s\n", agenda[i].nome, agenda[i].email, agenda[i].telefone);
    }
}

void alterar(Contato agenda[], int n) {
    char nomeBusca[50];
    printf("\nDigite o nome do contato a alterar: ");
    lerString(nomeBusca, sizeof(nomeBusca));

    for (int i = 0; i < n; i++) {
        if (strcmp(agenda[i].nome, nomeBusca) == 0) {
            printf("Novo nome: ");
            lerString(agenda[i].nome, sizeof(agenda[i].nome));
            printf("Novo email: ");
            lerString(agenda[i].email, sizeof(agenda[i].email));
            printf("Novo telefone: ");
            lerString(agenda[i].telefone, sizeof(agenda[i].telefone));
            printf("Contato alterado com sucesso!\n");
            return;
        }
    }
    printf("Contato não encontrado!\n");
}

void remover(Contato agenda[], int *n) {
    char nomeBusca[50];
    printf("\nDigite o nome do contato a remover: ");
    lerString(nomeBusca, sizeof(nomeBusca));

    for (int i = 0; i < *n; i++) {
        if (strcmp(agenda[i].nome, nomeBusca) == 0) {
            for (int j = i; j < *n - 1; j++) {
                agenda[j] = agenda[j + 1];
            }
            (*n)--;
            printf("Contato removido com sucesso!\n");
            return;
        }
    }
    printf("Contato não encontrado!\n");
}

int main() {
    Contato agenda[MAX];
    int n = 0, opcao;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Cadastrar\n");
        printf("2 - Pesquisar\n");
        printf("3 - Listar Ordenado\n");
        printf("4 - Alterar\n");
        printf("5 - Remover\n");
        printf("6 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        limparBuffer();

        switch (opcao) {
            case 1: cadastrar(agenda, &n); break;
            case 2: pesquisar(agenda, n); break;
            case 3: ordenar(agenda, n); break;
            case 4: alterar(agenda, n); break;
            case 5: remover(agenda, &n); break;
            case 6: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 6);

    return 0;
}

