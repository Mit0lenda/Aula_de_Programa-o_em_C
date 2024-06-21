//Faça um programa que preenche uma matriz 4 x 4  de inteiros com o produto do valor da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz. 
#include<stdio.h>
int main (){
    int mat[4][4];
    int linha,coluna;

    for ( linha = 0; linha < 4; linha++)
    {
        for ( coluna = 0; coluna < 4; coluna++)
        {
            mat[linha][coluna]= linha * coluna;
        }
        
    }
        for ( linha = 0; linha < 4; linha++)
    {
        for ( coluna = 0; coluna < 4; coluna++)
        {
            printf("\nMatriz[%d][%d]=%d\n",linha,coluna,mat[linha][coluna]);
        }
        
    }
}