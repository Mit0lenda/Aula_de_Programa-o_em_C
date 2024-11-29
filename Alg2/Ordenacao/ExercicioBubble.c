#include <stdio.h>

int main()
{
    int vetor[15]={3, 4, 9, 2, 5, 8, 1, 7, 4, 6, 2, 9, 8, 5, 1}, i, j, temp;
    for (i = 0; i < 14; i++)
    {

        for (j = 0; j < 14 - i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 15; i++)
    {
        printf("%d ", vetor[i]);
    }
}