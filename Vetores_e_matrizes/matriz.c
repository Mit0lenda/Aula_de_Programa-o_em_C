#include <stdio.h>
int main()
{
  int matriz[3][3];
  for(int x=0;x<3;x++)
  {
    for (int nic=0;nic < 3; nic++)
    {
      printf("digite 5 vezes numeros:\n");
      scanf("%d",&matriz[x][nic]);
    }
  }
  for(int x=0;x<3;x++)
  {
    for (int nic=0;nic < 3; nic++)
    {
      printf("%d ",matriz[x][nic]);
    }
      printf("\n");
  }
}
