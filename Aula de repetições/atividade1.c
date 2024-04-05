// elabore um programa para informar se a pessoa pode tirar a carteira de motorista ou não.A entrada de dados é a idade.
#include <stdio.h>
int main()
{
    int idade;
    printf("Qual sua idade:");
    scanf("%d", &idade);
    if (idade <= 0)
    {
        printf("Digite novamente sua idade:");
        scanf("%d", &idade);
        if (idade >= 18)
        {
            printf("Você pode tirar a carteira!");
        }
        else
        {
            printf("Você não pode tirar a carteira!");
        }
    }
    else
    {
        if (idade >= 18)
        {
            printf("Você pode tirar a carteira!");
        }
        else
        {
            printf("Você não pode tirar a carteira!");
        }
    }
}