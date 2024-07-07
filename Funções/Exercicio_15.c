//Elabore um programa que cria uma função em linguagem C que receba 3 números e retorne o menor valor. Use a função da questão 6.
#include<stdio.h>
int menor(int num1,int num2,int num3){
    int menornum;
    if (num1 < num2)
    {
        if (num1 < num3)
        {
            menornum=num1;
        }
        else {
            menornum= num3;
        }
    }else {
            if (num2 < num3)
            {
                menornum= num2;
            }
            else{
                menornum= num3;
            }
            
    }
    return menornum;
}
int main(){
    int num1,num2,num3;
    printf("Digite numero: ");
    scanf("%d",&num1);
    printf("Digite numero: ");
    scanf("%d",&num2);
    printf("Digite numero: ");
    scanf("%d",&num3);
    printf("O numero %d e menor",menor(num1,num2,num3));
}