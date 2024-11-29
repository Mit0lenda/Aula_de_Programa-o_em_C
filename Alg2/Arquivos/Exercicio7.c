#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxAlunos 50

typedef struct {
    float nota1;
    float nota2;
    float nota3;
    float media;
} Notas;

typedef struct {
    char nome[30];
    Notas nota;
} Aluno;

int main() {
    FILE *fp;
    Aluno alunos[maxAlunos];
    int totalAlunos = 0;
    char linha[256]; // Buffer para leitura de cada linha do arquivo
    float somaMediaTurma = 0.0;

    // Abre o arquivo para leitura
    fp = fopen("alunos.txt", "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1; // Finaliza o programa
    }

    // Lê os dados do arquivo
    while (fgets(linha, sizeof(linha), fp) != NULL) {
        sscanf(linha, "Aluno: %[^;];Nota1:%f;%f;%f;%f", 
               alunos[totalAlunos].nome, 
               &alunos[totalAlunos].nota.nota1, 
               &alunos[totalAlunos].nota.nota2, 
               &alunos[totalAlunos].nota.nota3, 
               &alunos[totalAlunos].nota.media);

        somaMediaTurma += alunos[totalAlunos].nota.media;
        totalAlunos++;
    }
    fclose(fp);
    // Exibe os dados dos alunos
    if (totalAlunos > 0) {
        printf("Informacoes dos alunos:\n");
        for (int i = 0; i < totalAlunos; i++) {
            printf("Aluno: %s\n", alunos[i].nome);
            printf("Nota 1: %.2f\n", alunos[i].nota.nota1);
            printf("Nota 2: %.2f\n", alunos[i].nota.nota2);
            printf("Nota 3: %.2f\n", alunos[i].nota.nota3);
            printf("Media: %.2f\n\n", alunos[i].nota.media);
        }

        // Exibe a média geral da turma
        printf("Media da turma: %.2f\n", somaMediaTurma / totalAlunos);
    } else {
        printf("Nenhum aluno encontrado no arquivo.\n");
    }

    printf("\nFim do programa.\n");
    return 0;
}
