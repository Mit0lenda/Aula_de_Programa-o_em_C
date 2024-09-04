//Crie um vetor de 16 posições de inteiros (receba os valores pelo teclado para serem armazenados). Posteriormente, troque os 8 primeiros valores pelos 8 últimos e vice-e-versa. 
//Escreva ao final o vetor obtido.
#include<stdio.h>
int main()
{
    int vetor[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},v,aux;
    for (v=0;v<8;v++)
    {
        aux=vetor[v+8];
        vetor[v+8]=vetor[v];
        vetor[v]=aux;
    }
        for (v=0;v<16;v++)
    {
        printf("%d ",vetor[v]);
    }
    
}
