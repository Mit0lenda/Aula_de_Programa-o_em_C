//Crie uma programa que utilizando uma  função em linguagem C que receba 2 números e retorne o maior valor.
#include<stdio.h>
int maior(int num1,int num2){
    int maiornum;
    if (num1 > num2)
    {
        maiornum=num1;
    }else {
            maiornum= num2;
    }
    return maiornum;
}
int main(){
    int num1,num2;
    printf("Digite numero: ");
    scanf("%d",&num1);
    printf("Digite numero: ");
    scanf("%d",&num2);
    printf("O numero %d e maior",maior(num1,num2));
}