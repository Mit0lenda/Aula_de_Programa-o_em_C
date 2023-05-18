//Faça um programa que preenche uma matriz 4 x 4  de inteiros com o produto do valor da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz. 
#include <stdio.h>

int main() {
    int matriz[4][4],c,l;

    for (l=0;l<4;l++) {
        for (c=0;c<4;c++) { 
            matriz[l][c]=l*c;
            printf(" %d",matriz[l][c]);
        }
        printf("\n");
    }
    	return 0;
}

