//Crie um vetor de 15 posições de inteiros e posteriormente realize a compactação dele, isto é, 
//elimine as posições com valor zero avançando uma posição, com os com os valores subseqüentes do vetor. 
//Dessa forma todos “zeros” devem ficar para as posições finais do vetor.
#include<stdio.h>
int main()
{
    int vetor[15]={0,2,1,4,5,0,4,7,6,9,0,11,0,13,14},v,j,aux;
    for (v=0;v<15;v++)
    {
        if (vetor[v]==0)
        {
            for (j=v;j<14;j++)
            {
                aux=vetor[j+1];
                vetor[j+1]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
    for (v=0;v<15;v++)
    {
        printf(" %d ",vetor[v]);
    }
    
}