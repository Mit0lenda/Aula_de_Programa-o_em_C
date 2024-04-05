#include<stdio.h>
int main()
{
    int matriz[6][6]= {10, 10, 10, 10, 12, 13,14, 1,  2,  3,  4,  5,6,  7,  8,  9,  10, 10,10, 12, 13, 14, 1,  2,3,  4,  5,  6,  7,  8,9,  10, 10, 10, 12, 13},i,j,conta=0;
    for (i=0;i<6;i++)
    {
        for (j=0;j<6;j++)
        {
            if (matriz[i][j] > 10)
            {
                printf(" %d ",matriz[i][j]);
                conta= conta + 1;
            }
            
        }
        
    }
    printf("contagem= %d",conta);
}