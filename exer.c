#include <stdio.h>
int main()
{
  int soma=0;
  int vetor[5];
  for(int x=0;x<5;x++)
  {
    printf("digite 5 vezes numeros:\n");
    scanf("%d",&vetor[x]);
  }
  for(int nic=0;nic<5;nic++){
    soma=soma+vetor[nic];
    printf("a soma:%d\n",soma);
  }
}
