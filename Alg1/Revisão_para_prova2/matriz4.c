#include<stdio.h>
int main()
{
    int matriz[4][4]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},i,j,aux=0;
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            if (i==0)
            {
                aux=matriz[0][j];
                matriz[0][j]=matriz[i][3];
                matriz[i][3]=aux;
            }
            if (i==1)
            {
                aux=matriz[0][j];
                matriz[0][j]=matriz[i][3];
                matriz[i][3]=aux;
            }
            if (i==2)
            {
                aux=matriz[0][j];
                matriz[0][j]=matriz[i][3];
                matriz[i][3]=aux;
            }
            if (i==3)
            {
                aux=matriz[0][j];
                matriz[0][j]=matriz[i][3];
                matriz[i][3]=aux;
            }
        }
        
    }
    for (i=0;i<4;i++)
    {
        printf("\n");
        for (j=0;j<4;j++)
        {
           printf(" %d ",matriz[i][j]);              
        }
        
    }
}