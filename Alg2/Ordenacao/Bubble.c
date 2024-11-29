#include <stdio.h>

int main()
{
    int vetor[5], i, j, temp;

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite um valor para vetor[%d]", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 4; i++)
    {

        for (j = 0; j < 4 - i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }
}