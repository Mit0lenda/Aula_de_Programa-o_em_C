#include <stdio.h>

int main() {
    int n;
    
    // Solicita o tamanho do losango
    printf("Digite o tamanho do losango (um número ímpar): ");
    scanf("%d", &n);
    
    // Verifica se o número é ímpar
    if (n % 2 == 0) {
        printf("O número deve ser ímpar.\n");
        return 1;
    }
    
    // Desenha o losango
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= n / 2) {
                // Parte de cima do losango
                if (j >= n / 2 - i && j <= n / 2 + i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            } else {
                // Parte de baixo do losango
                if (j >= i - n / 2 && j <= n - (i - n / 2) - 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}
