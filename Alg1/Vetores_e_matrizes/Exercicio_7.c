// Elabore um programa que manipule com uma matriz 4 x 4 de inteiros, conte e escreva quantos valores maiores que 10 ela possui.
#include <stdio.h>
int main()
{
    int mat[4][4];
    int quantidadeNumeros = 0;
    int i,j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite um numero:");
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > 10)
            {
                quantidadeNumeros++;
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Matriz[%d][%d]= %d\n",i,j,mat[i][j]);
        }
    }
    printf("\nE %d são maiores que '10' na matriz",quantidadeNumeros);
}
