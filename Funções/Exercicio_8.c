// Crie um programa que utilizando uma função 
//que recebe um valor e informe se ele é positivo ou não.
#include<stdio.h>
void verifica(int numero){
    if (numero >=1)
    {
        printf("Numero:%d Positivo",numero);
    } else{ if(numero <= -1){
        printf("Numero:%d Negativo",numero);
    }
        else{
            printf("Numero:%d Neutro",numero);
        }
    }
    
}
int main (){
    int number;
    printf("Digite um numero: ");
    scanf("%d",&number);
    verifica(number);
}