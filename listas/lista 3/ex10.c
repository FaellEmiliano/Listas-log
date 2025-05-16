#include <stdio.h>

int main()
{
    char escolha='a';
    int a,b;
    while(escolha!='S'&&escolha!='s')
    {
        printf("Digite uma acao:\n[+] adicao\n[-] subtracao\n[*] multiplicacao\n[/]divisao\n[S] sair\n");
        scanf(" %c",&escolha);
        switch (escolha)
        {
        case '+':
            printf("digite o primeiro numero:\n");
            scanf("%i",&a);
            printf("digite o segundo numero:\n");
            scanf("%i",&b);
            printf("%i + %i = %i\n",a,b,a+b);
            break;
        case '-':
            printf("digite o primeiro numero:\n");
            scanf("%i",&a);
            printf("digite o segundo numero:\n");
            scanf("%i",&b);
            printf("%i - %i = %i\n",a,b,a-b);
            break;
        case '*':
            printf("digite o primeiro numero:\n");
            scanf("%i",&a);
            printf("digite o segundo numero:\n");
            scanf("%i",&b);
            printf("%i * %i = %i\n",a,b,a*b);
            break;
        case '/':
            printf("digite o primeiro numero:\n");
            scanf("%i",&a);
            printf("digite o segundo numero:\n");
            scanf("%i",&b);
            printf("%i / %i = %i\n",a,b,a/b);
            break;
        case 's':
            break;
        case 'S':
            break;
        default:
            printf("dado invalido, tente novamente\n");
            break;
        }
    } 
    
    return 0;
}