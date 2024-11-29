#include <stdio.h>

void troca(int *v1, int *v2) {
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

int dividevetor(int vetor[], int menor, int maior) {
    int pivo = vetor[maior];
    int i = menor - 1;

    for (int j = menor; j < maior; j++) {
        if (vetor[j] <= pivo) {
            i++;
            troca(&vetor[i], &vetor[j]);
        }
    }
    troca(&vetor[i + 1], &vetor[maior]);
    return i + 1; // Retorna a posição do pivô
}

void quicksort(int vetor[], int menor, int maior) {
    if (menor < maior) {
        int indice_pivo = dividevetor(vetor, menor, maior);

        // Chamada recursiva para as duas sub-partes
        quicksort(vetor, menor, indice_pivo - 1); // Lado esquerdo do pivô
        quicksort(vetor, indice_pivo + 1, maior); // Lado direito do pivô
    }
}

int main() {
    int vetor[15] = {3, 4, 9, 2, 5, 8, 1, 7, 4, 6, 2, 9, 8, 5, 1};
    int tamanho = 15;

    quicksort(vetor, 0, tamanho - 1); // Ordena o vetor

    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
