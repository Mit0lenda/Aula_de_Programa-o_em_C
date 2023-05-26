//Faça um programa que implemente uma função que recebe a idade de um nadador por parâmetro e retorna, também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:  
#include <stdio.h>
#include <math.h>
int verificacao(int n1)
{
    int veri;
    if(n1>=5 && n1<=7)
    {
        veri=1;
    }
    else{
    if(n1>=8 && n1<=10)
        {
            veri=2;
        }
    else{
    if(n1>=11 && n1<=13)
    {
        veri=3;
    }
    else{
        if(n1>=14 && n1<=17)
        {
          veri=4;
        }
        else
            {
              veri=5;
            }
        }
    }
    } 
    return veri;
}
int main(){
    int m1,idade;
    printf("Digite sua idade:");
    scanf("%d",&m1);
    idade=verificacao(m1);
    switch (idade)
    {
    case 1:
      printf("Categoria infantil A");
      break;
    case 2:
      printf("Categoria infantil B");
      break;
    case 3:
      printf("Categoria Juvenil A");
      break;
    case 4:
      printf("Categoria Juvenil B");
      break;
    case 5:
      printf("Categoria Adulto");
    default:
      break;
    }
    
    
}


