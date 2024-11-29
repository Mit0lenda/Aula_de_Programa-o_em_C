#include <stdio.h>

void bubbleSortRec(int vetor[], int n)
{
    int temp;
    if (n != 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                temp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temp;
            }
        }
        bubbleSortRec(vetor, n - 1);
    }
}

int main()
{
    int vetor[5], i;

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite um valor");
        scanf("%d", &vetor[i]);
    }

    bubbleSortRec(vetor, 5);

    for (i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }
}