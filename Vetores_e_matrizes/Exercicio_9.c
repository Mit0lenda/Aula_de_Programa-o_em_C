// Faça um programa que manipule com uma matriz 4 x 4 de inteiros, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.
#include <stdio.h>
int main()
{
    int mat[4][4], linha, coluna, i = 0, j = 0, maiorNumero;
    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            printf("\nDigite um valor: ");
            scanf("%d", &mat[linha][coluna]);
        }
    }
    maiorNumero = mat[0][0];
    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            if (mat[linha][coluna] > maiorNumero)
            {
                i = linha;
                j = coluna;
                maiorNumero = mat[linha][coluna];
            }
        }
    }
    printf("O maior numero na matriz é %d e se encontra matriz[%d][%d]", maiorNumero, i, j);
}