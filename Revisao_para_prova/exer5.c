#include<stdio.h>
int main(){
  int tipo;
  float quant,valor_final,valor,desconto,nv;
  printf("Digite para 1 alcool ou 2 para gasolina");
  scanf("%d",&tipo);
  while (tipo < 1 || tipo > 2)
  {
    printf("Digite para 1 alcool ou 2 para gasolina");
    scanf("%d",&tipo);
  }
  switch (tipo)
  {
    case 1:
        printf("voce escolheu a Alcool agora digite a quantidade que deseja:");
        scanf("%f",&quant);
        while (quant <= 0)
        {
          printf("voce escolheu a Alcool agora digite a quantidade que deseja:");
          scanf("%f",&quant);
        }
        
        printf("Digite o valor do litro");
        scanf("%f",&valor);
        while (valor <= 0)
        {
          printf("Digite o valor do litro");
          scanf("%f",&valor);
        }
        if (quant>=10 && quant<=20)
        {
          desconto=(valor*3)/100;
          nv=valor-desconto;
          valor_final=(valor*quant)-(desconto*quant);
          printf("Voce escolheu Alcool,Quantidade abastecido %.2f L,valor do litro sem desconto R$%.2f,valor do desconto por litro R$%.2f,valor do litro com o desconto R$%.2f,valor total R$%.2f ",quant,valor,desconto,nv,valor_final);
        }
        if (quant > 20)
        {
          desconto=(valor*5)/100;
          nv=valor-desconto;
          valor_final=(valor*quant)-(desconto*quant);
          printf("Voce escolheu Alcool,Quantidade abastecido %.2f L,valor do litro sem desconto R$%.2f,valor do desconto por litro R$%.2f,valor do litro com o desconto R$%.2f,valor total R$%.2f ",quant,valor,desconto,nv,valor_final);
        }
        
      
      break;
    case 2:
        printf("voce escolheu a gasolina agora digite a quantidade que deseja:");
        scanf("%f",&quant);
        while (quant <= 0)
        {
          printf("voce escolheu a gasolina agora digite a quantidade que deseja:");
          scanf("%f",&quant);
        }
        
        printf("Digite o valor do litro");
        scanf("%f",&valor);
        while (valor <= 0)
        {
          printf("Digite o valor do litro");
          scanf("%f",&valor);
        }
        if (quant>=20 && quant<=30)
        {
          desconto=(valor*7)/100;
          nv=valor-desconto;
          valor_final=(valor*quant)-(desconto*quant);
          printf("Voce escolheu gasolina,Quantidade abastecido %.2f L,valor do litro sem desconto R$%.2f,valor do desconto por litro R$%.2f,valor do litro com o desconto R$%.2f,valor total R$%.2f ",quant,valor,desconto,nv,valor_final);
        }
        if (quant > 30)
        {
          desconto=(valor*8)/100;
          nv=valor-desconto;
          valor_final=(valor*quant)-(desconto*quant);
          printf("Voce escolheu gasolina,Quantidade abastecido %.2f L,valor do litro sem desconto R$%.2f,valor do desconto por litro R$%.2f,valor do litro com o desconto R$%.2f,valor total R$%.2f ",quant,valor,desconto,nv,valor_final);
        }
        
      
      break;

  }
  
}