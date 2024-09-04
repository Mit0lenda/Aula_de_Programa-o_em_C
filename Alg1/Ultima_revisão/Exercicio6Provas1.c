#include<stdio.h>
int main(){
    int vetor1[5];
    int vetor2[8];
    int i,j;
    int numeroIguais=0;
    int encontrou =0;
    for ( i = 0; i < 5; i++)
    {
        printf("\nDigite um valor para o vetor1 na posicão:%d: ",i);
        scanf("%d",&vetor1[i]);
    }
        for ( i = 0; i < 8; i++)
    {
        printf("\nDigite um valor para o vetor2 na posicão:%d: ",i);
        scanf("%d",&vetor2[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        encontrou=0;
        for (j = 0; j < 8; j++)
        {
            if (vetor1[i]==vetor2[j])
            {
                if (encontrou ==0)
                {
                    numeroIguais++;
                    printf("\nO mesmo valor nas dois vetores:%d",vetor1[i]);
                }
                encontrou=1;
            }
            
        } 
    }
    if (numeroIguais ==0)
    {
        printf("Nenhum valor igual encontrado.");
    }
    
}