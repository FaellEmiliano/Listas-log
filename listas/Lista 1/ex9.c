#include <stdio.h>


int main()
{
    float p1,p2,ativ;
    printf("Digite a nota das duas avaliacoes: \n");
    scanf("%f %f",&p1,&p2);
    printf("Digite a nota das atividades: \n");
    scanf("%f",&ativ);
    printf("A media e: %f",(p1*4 + p2*4 + ativ*2)/10);
    return 0;
}