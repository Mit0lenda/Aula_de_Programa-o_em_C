//Faça um programa que manipule com uma matriz 5 x 5 de inteiros. Leia também um valor inteiro independente.
// O programa deverá fazer uma busca à desse valor na matriz e, ao final, escrever a localização (linha e coluna) 
//ou uma mensagem de “não encontrado”.

#include<stdio.h>
int main(){
    int mat[5][5],linha,coluna,numeroEscolhido,i=-1,j=-1,achei=0;
    printf("Qual numero vc procura ?");
    scanf("%d",&numeroEscolhido);
    for ( linha = 0; linha < 5; linha++)
    {
        for ( coluna = 0; coluna < 5; coluna++)
        {
            printf("\nDigite o valor:");
            scanf("%d",&mat[linha][coluna]);
        }
        
    }
    for ( linha = 0; linha < 5; linha++)
    {
        for ( coluna = 0; coluna < 5; coluna++)
        {
            if (numeroEscolhido == mat[linha][coluna])
            {
                i=linha;
                j=coluna;
                achei=1;
            }
            
        }
        
    }
    
    if (achei == 0)
    {
        printf("Numero não encontrado");
    }
    else{
        printf("Numero escolhido:%d foi encontrado na matriz[%d][%d]",numeroEscolhido,i,j);
    }
    

}