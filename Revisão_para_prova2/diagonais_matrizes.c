#include<stdio.h>
int main(){
    int matriz[4][4]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},c,l;
for (l=0;l<4;l++)
{
    printf("%d ",matriz[l][l]);
}
for (l=0;l<4;l++)
{
    for (c=0;c<4;c++)
    {
    //    if (l+c==3)
//{
       //     printf("\n %d ",matriz[l][c]);
      //  }
        if (l==c)
        {
            printf("\n %d ",matriz[l][c]);
        }
        
        
    }
    
}

}