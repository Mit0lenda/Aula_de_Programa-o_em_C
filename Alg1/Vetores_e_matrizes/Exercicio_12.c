//Elabore um algoritmo que 
//preencha duas matrizes 10×10 com valores aleatórios 0 e 1 e em seguida, determine se as matrizes são iguais 
//(possuem os mesmos valores em cada posição).
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));

    int mat1[10][10],mat2[10][10],linha,coluna,iguais=0;

    for ( linha = 0; linha < 10; linha++)
    {
        for ( coluna = 0; coluna < 10; coluna++)
        {
            mat1[linha][coluna] = rand() % 2;
            mat2[linha][coluna] = rand() % 2;
            if(mat1[linha][coluna] != mat2[linha][coluna]){
                iguais=1;
            }
        }
        
    }
    for ( linha = 0; linha < 10; linha++)
    {
        for ( coluna = 0; coluna < 10; coluna++)
        {
            printf("\nMatriz 1 [%d][%d]: %d\n",linha,coluna,mat1[linha][coluna]);
        }
        
    }
        for ( linha = 0; linha < 10; linha++)
    {
        for ( coluna = 0; coluna < 10; coluna++)
        {
            printf("\nMatriz 2 [%d][%d]: %d\n",linha,coluna,mat2[linha][coluna]);
        }
        
    }
    if (iguais=0)
    {
        printf("Sim são iguais!");
    }
    else 
    {
        printf("Não são iguais!");
    }
    
    
}