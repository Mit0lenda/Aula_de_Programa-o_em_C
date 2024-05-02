#include<stdio.h>
int main()
{
    float n1;
    int n2;
    printf("Digite seu salário:");
    scanf("%f",& n1);
    while (n1 <= 0)
    {
        printf("Erro \n Digite novamente seu salário:");
        scanf("%f",& n1);
    }
    printf(" Qual setor vc pertence:\n 1)A,2)B,3)C,4)D ou 5)E");
    scanf("%d",&n2);
    while (n2 < 1 || n2 > 5)
    {
    printf(" Erro digite novamente\nQual setor vc pertence:\n 1)A,2)B,3)C,4)D ou 5)E");
    scanf("%d",&n2);
    }
    switch(n2)
    {
        //devez de usarmos essa lógica podemos utilizar 0.10 por exemplo!
        case 1:
        printf("O setor escolhido foi A.\n seu salário atual é de R$%.2f e após o aumento ficara R$%.2f ",n1,n1 +((n1*10)/100));
        break;
        case 2:
        printf("O setor escolhido foi B.\n seu salário atual é de R$%.2f e após o aumento ficara R$%.2f ",n1,n1 +((n1*15)/100));
        break;
        case 3:
        printf("O setor escolhido foi C.\n seu salário atual é de R$%.2f e após o aumento ficara R$%.2f ",n1,n1 +((n1*20)/100));
        break;
        case 4:
        printf("O setor escolhido foi D.\n seu salário atual é de R$%.2f e após o aumento ficara R$%.2f ",n1,n1 +((n1*25)/100));
        break;
        case 5:
        printf("O setor escolhido foi E.\n seu salário atual é de R$%.2f e após o aumento ficara R$%.2f ",n1,n1 +((n1*20)/100));
        break;

    }
}