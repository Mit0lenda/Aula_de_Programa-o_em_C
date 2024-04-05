#include <stdio.h>

int main()
{
    int matriz[4][4], l, c, vetor[4], v = 0,maior=1;
    for (l = 0; l < 4; l++)
    {   
        for (c = 0; c < 4; c++)
        {
            printf("Digite o número que deseja colocar na matriz: ");
            scanf("%d", &matriz[l][c]);
        }
    }
    for (l = 0; l < 4; l++)
    {
        if (matriz[l][3 - l] <= 20)
        {
            maior = 0;
            break;
        }
    }
    if (maior)
    {
        printf("Os números da diagonal secundária são todos maiores que 20.\n");
    }
    else
    {
        printf("Existem números na diagonal secundária menores ou iguais a 20.\n");
    }
    for (l = 0; l < 4; l++)
    {
        vetor[l] = matriz[l][l];
    }
    printf("Vetor com elementos da diagonal principal:\n");
    for (v = 0; v < 4; v++)
    {
        printf("%d ", vetor[v]);
    }
    printf("\n");
    printf("Elementos acima da diagonal secundária:\n");
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3 - l; c++)
        {
            printf("%d ", matriz[l][c]);
        }
    }
    printf("\n");
    
    return 0;
}
