#include<stdio.h>
int main()
{
  float cofrinho,moeda1,moeda2,moeda3,moeda4,moeda5,presente;
  printf("Digite quantas moedas de R$0,05 tem:");
  scanf("%f",&moeda1);
  while (moeda1<0)
  {
    printf("Digite quantas moedas de R$0,05 tem:");
    scanf("%f",&moeda1);
  }
  printf("Digite quantas moedas de R$0,10 tem:");
  scanf("%f",&moeda2);
  while (moeda2<0)
  {
    printf("Digite quantas moedas de R$0,10 tem:");
    scanf("%f",&moeda2);
  }
  printf("Digite quantas moedas de R$0,25 tem:");
  scanf("%f",&moeda3);
  while (moeda3<0)
  {
    printf("Digite quantas moedas de R$0,25 tem:");
    scanf("%f",&moeda3);
  }
  printf("Digite quantas moedas de R$0,50 tem:");
  scanf("%f",&moeda4);
  while (moeda4<0)
  {
    printf("Digite quantas moedas de R$0,50 tem:");
    scanf("%f",&moeda4);
  }
  printf("Digite quantas moedas de R$1,00 tem:");
  scanf("%f",&moeda5);
  while (moeda5<0)
  {
    printf("Digite quantas moedas de R$1,00 tem:");
    scanf("%.2f",&moeda5);
  }
  cofrinho=(moeda1*0.05)+(moeda2*0.10)+(moeda3*0.25)+(moeda4*0.50)+(moeda5*1.00);
  printf("O valor total do cofrinho:%.2f,\nqual o valor do presente:",cofrinho);
  scanf("%f",&presente);
  while (presente<0)
  {
    printf("O valor total do cofrinho:%.2f,\nqual o valor do presente:",cofrinho);
    scanf("%f",&presente);
  }
  
  if (presente > cofrinho)
  {
    printf("Pedir para o pai completar falta R$%.2f",presente-cofrinho);
  }
  else {
    printf("Tem dinheiro suficiente para comprar o presente");
  }
  
}