#include <stdio.h>
int main(){
 float salario,desconto;
  printf("Digite seu salario?");
  scanf("%f",& salario);
  desconto=((salario*11)/100);
  if (desconto<=318.20)
  {
    printf("O desconto %.2f",desconto);
  }
  else{
    printf("O desconto R$318,20");
  }
  

}