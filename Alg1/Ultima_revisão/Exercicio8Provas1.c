#include <stdio.h>
int divisivel(int numero)
{
    int ehdivisivel = 0 ;
    if (numero % 2 == 0 || numero % 3 == 0)
    {
        ehdivisivel += 1;
    }
    else
    {
        if (numero % 5 == 0 || numero % 7 == 0)
        {
            ehdivisivel += 2;
        }
    }
    return ehdivisivel;
}
int main()
{
    int numero;
    int ehdivisivel;
    while (numero>-1)
    {
        printf("\nDigite um numero:");
        scanf("%d", &numero);
        if (numero >= 0)
        {
            ehdivisivel = divisivel(numero);
            switch (ehdivisivel)
            {
            case 0:
                printf("\nnao é divisivel por 2,3,5 ou 7");
                break;
            case 1:
                printf("\nÉ divisivel por 2 ou 3");
                break;
            case 2:
                printf("\nÉ divisivel por 5 ou 7");
                break;
            default:
                break;
            }
        }
    }
}