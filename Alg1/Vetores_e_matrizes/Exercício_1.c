//Elabore um programa que manipule com uma matriz 4 x 4 de inteiros, conte e escreva quantos valores maiores que 10 ela possui.
#include <stdio.h>

int main() {
    int matriz[2][2],c,l,cont=0;
    for (l=0;l<2;l++) {
        for (c=0;c<2;c++) { 
            printf("Digite um numero:\n");
            scanf("%d",&matriz[l][c]);
            if(matriz[l][c]>10){
                cont++;
            }
        }
    }
    printf("Foi digitado:%d maiores que 10",cont);
	return 0;
}
