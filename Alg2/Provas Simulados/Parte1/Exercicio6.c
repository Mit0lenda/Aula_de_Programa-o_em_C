/*
Escreva um programa para calcular a média aritmética dos entre o número lido até 1. Utilizando recursividade para o cálculo. 
Exemplo se o número lido for 6, o cálculo será: (6+5+4+3+2+1)/6.
*/
#include <stdio.h>
int media(int n){
    if (n == 1)
    {
        return 1;
    }
    else{
        return n + media(n-1);
    }
}
int main(){
    int num1;
    float valor;
    printf("Digite para num1:");
    scanf("%d",&num1);
    valor=media(num1);
    printf("O valor:%.2f",valor/num1);
}