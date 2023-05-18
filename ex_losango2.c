#include <stdio.h>

int main()
{
    int tamanho;

    printf("Informe um numero impar para o tamanho do losango:");
    scanf("%d", &tamanho);

    while(tamanho%2 == 0)
    {
        printf("Informe um numero impar para o tamanho do losango:");
        scanf("%d", &tamanho);
    }

    for(int i=0; i < tamanho/2+1; i++)
    {
        for(int j=0; j < tamanho/2-i; j++)
        {
            printf(" ");
        }
        for(int k=0; k < 2*i+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=tamanho/2-1; i >= 0; i--)
    {
        for(int j=0; j < tamanho/2-i; j++)
        {
            printf(" ");
        }
        for(int k=0; k < 2*i+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }


}