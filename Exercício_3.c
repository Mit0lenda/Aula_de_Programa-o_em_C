#include <stdio.h>

int main() {
    int matriz[4][4],c,l;
    for (l=0;l<4;l++) {
        for (c=0;c<4;c++) { 
            printf("Digite um numero:\n");
            scanf("%d",&matriz[l][c]);
        }
    }
    for (l=0;l<4;l++) {
        for (c=0;c<4;c++) { 
            printf(" %d",matriz[l][c]);
        }
        printf("\n");
    }
    	return 0;
}