//2)	Faça uma função que recebe um valor inteiro e verifica se o valor é positivo, negativo ou zero. A função deve retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.
#include <stdio.h>
#include <math.h>
int verificacao(int n1)
{
    int veri;
    if(n1<0){
        veri=-1;
    }
    else{
    if(n1==0){
            veri=0;
        }
    else{
        veri=1;
    }
    }
    return veri;
}
int main(){
    int m1;
    printf("Digite um numero:");
    scanf("%f",&m1);
    printf("você digitou um numero:%d",verificacao(m1));
    
    
}
