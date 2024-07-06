//2)	Faça uma função que recebe um valor inteiro e verifica se o valor é positivo, negativo ou zero.
// A função deve retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.
#include<stdio.h>
int verifica( int valor){
    int verificado;
    if(valor >= 1){
        verificado = 1;
    }else{
        if (valor < 0)
        {
            verificado = -1;
        }else{
            verificado = 0;
        }
        
    }
    
    return verificado;
}
int main (){
    int valor,numero;

    printf("Digite um valor: ");
    scanf("%d",&valor);
    numero = verifica(valor);
    if(numero == 1){
        printf("O numero %d e Positivo",valor);
    }else{
        if (numero == 0)
        {
            printf("O numero %d e zero ",valor);
        }else{
            printf("O numero %d e negativo ",valor);
        }
        
    }

}