//Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos e espaços em branco. 
//Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20. Para lado igual a 5:
#include<stdio.h>
int main()
{
    int n1;
    printf("Qual o tamanho ?");
    scanf("%d",&n1);
    for (int l = 0; l < n1; l++)
    {
        for (int c = 0; c < n1; c++)
        {
            if(l == 0 || l == n1 -1 || c==0 || c== n1-1 )
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf(" \n");
    }
    
}