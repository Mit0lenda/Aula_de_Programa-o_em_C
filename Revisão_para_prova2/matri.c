#include<stdio.h>
int main()
{
    int matriz[5][5]={0,1,2,3,4,5,6,7,8,9,10,11,12,14,165,16,19,10,10,102,1,2,14,1,5,1},i,j,verifica=0,indice1=0,indice2=0;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (matriz[i][j]>verifica)
            {
                indice1=i;
                indice2=j;
                verifica=matriz[i][j];
            }
            
        }
        
    }
    printf("o maior numero:%d e linha %d e coluna %d",verifica,indice1,indice2);
}