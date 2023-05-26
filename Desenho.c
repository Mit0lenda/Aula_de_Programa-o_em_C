#include <stdio.h>
//Desenho com matriz
int main()
{
  int n=20;
  for(int linha=0;linha<n;linha++)
  {
    for (int coluna=0;coluna < n; coluna++)
    {
      if (linha==coluna)
      {
        printf("*");
      }
      else
        printf(" ");
    }
    printf("\n");
  }
}
