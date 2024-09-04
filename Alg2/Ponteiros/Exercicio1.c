#include <stdio.h>
void minMax(int vet[],int *min,int *max){
    *min = vet[0];
    *max = vet[0];
    for (int i = 0; i < 5; i++)
    {
        if (vet[i] < *min)
        {
            *min = vet[i];
        }
        if (vet[i] > *max)
        {
            *max = vet[i]; 
        }
    }
    
}
int main()
{
    int vet1[5];
    int min;
    int max;
    for ( int i = 0; i < 5; i++)
    {
        printf("\nDigite o valor:");
        scanf("%d",&vet1[i]);
    }
    minMax(vet1,&min,&max);

    printf("\nMaximo:%d",max);
    printf("\nMinimo:%d",min);
    
}