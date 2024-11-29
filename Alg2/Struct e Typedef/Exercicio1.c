#include<stdio.h>
#include<stdlib.h>
struct cadastro
{
    int idade;
    char nome[30];
    float altura;
};

int main(){
    struct cadastro pessoa[2];
    int i;
    for ( i = 0; i < 2; i++)
    {
        printf("Digite o nome:");
        scanf("%s",pessoa[i].nome);
        printf("Digite a idade:");
        scanf("%d",& pessoa[i].idade);
        printf("Digite a altura:");
        scanf("%f",& pessoa[i].altura);
    }
    printf("Os que possuem maior altura que 1.78 são:\n");
    for ( i = 0; i < 2; i++)
    {
        if (pessoa[i].altura > 1.78)
        {
            printf("Nome:%s\n",pessoa[i].nome);
        }
        
    }
    
}