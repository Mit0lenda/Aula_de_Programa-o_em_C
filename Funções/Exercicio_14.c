//Elabore um programa que cria uma função em linguagem C que receba 3 números e retorne o maior valor. Use a função da questão 5.
#include<stdio.h>
int maior(int num1,int num2,int num3){
    int maiornum;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            maiornum=num1;
        }
        else {
            maiornum= num3;
        }
    }else {
            if (num2 > num3)
            {
                maiornum= num2;
            }
            else{
                maiornum= num3;
            }
            
    }
    return maiornum;
}
int main(){
    int num1,num2,num3;
    printf("Digite numero: ");
    scanf("%d",&num1);
    printf("Digite numero: ");
    scanf("%d",&num2);
    printf("Digite numero: ");
    scanf("%d",&num3);
    printf("O numero %d e maior",maior(num1,num2,num3));
}