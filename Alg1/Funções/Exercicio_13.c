//Crie uma programa que utilizando uma  função em linguagem C que receba 2 números e retorne o menor valor.
#include<stdio.h>
int menor(int num1,int num2){
    int menornum;
    if (num1 < num2)
    {
        menornum=num1;
    }else {
            menornum= num2;
    }
    return menornum;
}
int main(){
    int num1,num2;
    printf("Digite numero: ");
    scanf("%d",&num1);
    printf("Digite numero: ");
    scanf("%d",&num2);
    printf("O numero %d e menor",menor(num1,num2));
}