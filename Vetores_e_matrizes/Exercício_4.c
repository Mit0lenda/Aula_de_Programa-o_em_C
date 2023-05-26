//Faça um programa que manipule com uma matriz 4 x 4 de inteiros, imprima a matriz e retorne a localização (linha e a coluna) do maior valor. 
#include <stdio.h>

int main() {
    int matriz[4][4],c,l,maior,p,n;
    for (l=0;l<4;l++) {
        for (c=0;c<4;c++) { 
            matriz[l][c]=l*c;
            printf(" %d",matriz[l][c]);
        }
        printf("\n");
    }
    maior = matriz[0][0];

    for (l=0;l<4;l++) {
        for (c=0;c<4;c++) { 
            if(matriz[l][c]> maior){
                maior=matriz[l][c];
                p=l;
                n=c;
            }
        }
        printf("\n");
    }
    printf("\no maior numeor:%d,numero [%d] [%d]", maior,p,n);
    	return 0;
}
