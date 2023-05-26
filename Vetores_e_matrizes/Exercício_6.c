//Faça um programa que crie duas matrizes 4 x 4 de inteiros  e posteriormente cria  uma terceira com os maiores valores de cada posição das matrizes lidas.
#include <stdio.h>
int main(){
  int matriz[4][4],l,c,matriz1[4][4],matriz2[4][4];
  for (l=0;l<4;l++)
  {
    for (c=0;c<4;c++)
    {
      matriz[l][c]=l*c;
      printf("%d",matriz[l][c]);
    }
  printf("\n");
  }
    for (l=0;l<4;l++)
  {
    for (c=0;c<4;c++)
    {
      printf("digite[%d][%d]:",l,c);
      scanf("%d",& matriz1[l][c]);
      
    }
  printf("\n");
  }
      for (l=0;l<4;l++)
  {
    for (c=0;c<4;c++)
    {
      if (matriz[l][c]>matriz1[l][c])
      {
        matriz2[l][c]=matriz[l][c];
        printf("%d",matriz2[l][c]);
      }
      else
      {
        matriz2[l][c]=matriz1[l][c];
        printf("%d",matriz2[l][c]);
      }

    }
  printf("\n");
  }
  
}