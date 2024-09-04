//implementar um programa que calcula o desconto previdenciário de um funcionário. 
//O programa deve imprimir o valor do desconto proporcional ao salário informado na tela (que não poderá ser menor ou igual a zero).
// O cálculo do desconto segue a regra: o desconto deve ser de 11% do valor do salário, entretanto, o valor máximo de desconto é de  R$318,20. 
//Sendo assim, ou resultado do valor do desconto previdenciário deverá ser 11% sobre o salário ou 318,20.
#include <stdio.h>
int main()
{
    float n1,desconto;
    printf("Digite seu salário:");
    scanf("%f",&n1);
    while (n1 <= 0)
    {
        printf("Erro \n Digite novamente seu salário:");
        scanf("%f",&n1);
    }
    desconto= (n1 * 11) /100;
    if (desconto >= 318.20)
    {
        printf("O Desconto ficou:R$318,20  de %.2f \n o total: R$%.2f ",n1,n1-318.20);
    }
    else
    {
        printf(" o desconto ficou: R$ %.2f de %.2f \n o total: R$%.2f",desconto,n1,n1-desconto);
    }
}