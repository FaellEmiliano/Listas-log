#include <stdio.h>
#include <string.h>
int main(){
    int i, j, h=0;
    char n[40][100], x[100];
    printf("escreva 40 nomes de alunos:\n");
    for(i=0; i<40; i++){
        fgets(n[i], 100, stdin);
        n[i][strcspn(n[i], "\n")]='\0';
    }
    for(i=0; i <39; i++){
        for(j =i+1; j<40; j++) {
            if(strcmp(n[i], n[j])>0) {
                strcpy(x, n[i]);
                strcpy(n[i], n[j]);
                strcpy(n[j], x);
            }
        }
    }
    for(i=0; i<40; i++){
        printf("%s\n", n[i]);
    }
    printf("coloque um nome para ser pesquisado:\n");
    fgets(x, 100, stdin);
    x[strcspn(x, "\n")]='\0';
    for(i=0; i<40; i++){
        if(strcmp(x,n[i])==0){
            h=1;
            break;
        }
    }
        if(h){
            printf("O nome %s foi encontrado na posicao %d\n", x, i+1);
        } else{
            printf("O nome %s não foi encontrado\n", x);
        }
    return 0;
}