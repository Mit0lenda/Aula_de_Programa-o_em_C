#include<stdio.h>
int main (){
    int vet[16],i,aux;

    for ( i = 0; i < 16; i++)
    {
        printf("\nDigite o valor para vet[%d]:",i);
        scanf("%d",&vet[i]);
    }
    for (i = 0; i < 8; i++)
    {
        aux = vet[i];
        vet[i]=vet[i+8];
        vet[i+8]=aux;

    }
    
    printf("\nVetor invertido:");
    for(i=0;i<16;i++){
        printf("\nvet[%d]:%d",i,vet[i]);
    }
}