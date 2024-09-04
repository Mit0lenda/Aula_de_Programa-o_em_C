//Elabore um programa que use uma função que recebe um valor e diga se é nulo ou não.
#include<stdio.h>
void nulo(int numero){
if (numero == 0)
{
    printf("Numero:%d Neutro",numero);
}else {
    printf("Numero:%d Nao-Neutro",numero);
}

}
int main(){
    int numero;
        
    printf("Digite um numero: ");
    scanf("%d",&numero);
    nulo(numero);
}