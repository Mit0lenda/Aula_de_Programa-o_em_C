// A taxa de natalidade e a taxa de mortalidade são indicadores estatísticos de fundamental importância por ajudar a compreender
// aquilo que os especialistas chamam de dinâmica populacional e a entender sua relação com variáveis que influenciam o desenvolvimento,
// como qualidade de vida, migrações, , fatores socioeconômicos e localização. Sabendo disso,
// crie um programa que calcule os dois indicadores utilizando o comando switch.
#include <stdio.h>
int main()
{
    int n1, n2,op;
    printf("Quer saber qual taxa:\n1)Natalidade\n2)Mortabilidade\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Quantas crianças nasceram na cidade de osório:");
        scanf("%d", &n1);
        if (n1 < 0)
        {
            printf("Numero invalido");
        }
        printf("Quantos habitantes tem na cidade de osório:");
        scanf("%d", &n2);
        if (n2 < 0)
        {
            printf("Numero invalido");
        }
        printf("A taxa de natalidade é: %d %", (n1 * 1000) / n2);
        break;
    case 2:
        printf("Quantos habitantes tem na cidade de osório:");
        scanf("%d", &n2);
        if (n2 < 0)
        {
            printf("Numero invalido");
        }
        printf("Quantas pessoas morreram na cidade de osório:");
        scanf("%d", &n1);
        if (n1 < 0)
        {
            printf("Numero invalido");
        }
        printf("A taxa de mortalidade é: %d %", (n1 * 1000) / n2);
        break;

    default:
    printf("Não tem essa opção!");
        break;
    }
}