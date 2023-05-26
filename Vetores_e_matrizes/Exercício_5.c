#include <stdio.h>

int main()
{
  int matrix[5][5],l,c,busca=0,inc=0;
  printf("Digite o numero que deseja buscar na matriz:");
  scanf("%d",&busca);
  for(l=0;l<5;l++){
    for(c=0;c<5;c++){
        matrix[l][c]=l*c;
        printf(" %d",matrix[l][c]);
        if (matrix[l][c]==busca)
        {
          inc++;

        }
    }
    printf("\n");
  }
  if (inc==0)
  {
    printf("nao aparece");
  }
  for(l=0;l<5;l++){
    for(c=0;c<5;c++){
        matrix[l][c]=l*c;
        if (matrix[l][c]==busca)
        {
          inc++;
          printf("  Aparce na linha [%d][%d]",l,c);
        }
    }
  }
  
}