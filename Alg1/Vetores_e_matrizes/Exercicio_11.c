//Faça um programa que crie duas matrizes 4 x 4 de inteiros  e posteriormente cria  uma terceira com os maiores valores de cada posição das matrizes lidas.
#include<stdio.h>
int main(){
    int mat1[4][4],mat2[4][4],mat3[4][4];
    int linha,coluna;
    for ( linha = 0; linha < 4; linha++)
    {
        for ( coluna = 0; coluna < 4; coluna++)
        {
            printf("\nDigite o valor da matriz1[%d][%d]:",linha,coluna);
            scanf("%d", &mat1[linha][coluna]);
        }
        
    }
    for ( linha = 0; linha < 4; linha++)
    {
        for ( coluna = 0; coluna < 4; coluna++)
        {
            printf("\nDigite o valor da matriz2[%d][%d]:",linha,coluna);
            scanf("%d", &mat2[linha][coluna]);
        }
        
    }
        for ( linha = 0; linha < 4; linha++)
    {
        for ( coluna = 0; coluna < 4; coluna++)
        {
            if (mat1[linha][coluna] >= mat2[linha][coluna])
            {
                mat3[linha][coluna]=mat1[linha][coluna];
            }
            else{
                mat3[linha][coluna]=mat2[linha][coluna];
            }
            
        }
        
    }
    printf("\nImprimindo a matriz 3\n");
    for ( linha = 0; linha < 4; linha++)
    {
        for ( coluna = 0; coluna < 4;coluna++)
        {
            printf("Matriz 3 [%d][%d] = %d \n",linha,coluna,mat3[linha][coluna]);
        }
        printf("\n");
    }
    
    
}