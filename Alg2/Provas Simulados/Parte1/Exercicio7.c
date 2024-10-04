/*
Um fazendeiro está querendo controlar seu caixa e para isso ele solicitou que você faça o lançamento dos gastos mensais e o ganho anual na venda de sua colheita.
Os gastos mensais são de luz e óleo diesel para o trator. Faça uma função que solicite mês a mês o gasto com luz e combustível e calcule o total, que será passado
para a outra função que irá calcular o valor líquido da sua colheita (Vlíquido = valor venda colheita - gastos luz e combustível).
Imprima o total de gastos com luz no ano, o valor total gasto em combustível e o lucro obtido no ano no main.
*/
#include <stdio.h>
float gastosTotais()
{
    float luz, oleo, total;
    for (int i = 0; i < 12; i++)
    {
        printf("Digite o valor gasto em luz no mes %d:R$", i);
        scanf("%f", &luz);
        while (luz < 0)
        {
            printf("Digite novamente o valor gasto em luz no mes %d:R$", i);
            scanf("%f", &luz);
        }
        printf("Digite o valor gasto em oleo no mes %d:R$", i);
        scanf("%f", &oleo);
        while (oleo < 0)
        {
            printf("Digite novamente o valor gasto em oleo no mes %d:R$", i);
            scanf("%f", &oleo);
        }
        total = oleo+luz;
    }
    valorLiquido(total);
}

int main()
{
    gastosTotais();
}