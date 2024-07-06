//Crie um aplicativo de conversão entre as temperaturas Celsius e Farenheit.
//Primeiro o usuário deve escolher se vai entrar com a temperatura em Célsius ou Farenheit, depois a conversão escolhida é realizada através de um comando SWITCH.
//Se C é a temperatura em Célsius e F em farenheit, as fórmulas de conversão são:
//C= 5.(F-32)/9
//F= (9.C/5) + 32
#include<stdio.h>
void celsius(){
    float val1;
    printf("Digite o valor da temperatura em Celsius: ");
    scanf("%f",&val1);
    printf("O valor de Celsius %.2f em farenheit %.2f",val1,((9*val1/5)+32));
}
void farenheit(){
    float val1;
    printf("Digite o valor da temperatura em Farenheit: ");
    scanf("%f",&val1);
    printf("O valor de Farenheit %.2f em Celsius %.2f",val1,(5*(val1-32)/9));
}
int main(){
    char temp;
    printf("Digite C para Celsius e F para farenheit: ");
    scanf("%c",&temp);
    switch (temp)
    {
    case 'C':
        celsius();
    break;
    case 'F':
        farenheit();
    break;
    default:
    printf("Voce digitou errado.");
        break;
    }
}