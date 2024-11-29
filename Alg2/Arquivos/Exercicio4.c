#include<stdio.h>
int main(){
    FILE *fp;
    int contador=1;// Contador para numerar as linhas
    char nomeArquivo[100];// Para o nome do arquivo
    char linha[256];// Buffer para armazenar cada linha

    printf("Digite o nome do arquivo:");
    // Solicita o nome do arquivo ao usuário
    fgets(nomeArquivo,sizeof(nomeArquivo),stdin);
    // Remove o '\n' do final da entrada
    nomeArquivo[strcspn(nomeArquivo,"\n")] = '\0';
    fp = fopen(nomeArquivo,"r");
    if (fp == NULL)
    {
        printf("ERRO");
    }
    printf("Conteudo do arquivo '%s':\n",nomeArquivo);

    // Lê cada linha do arquivo e exibe na tela com numeração
    while (fgets(linha,sizeof(linha),fp) != NULL){
        printf("%d: %s",contador,linha);
        contador++;
    }
    fclose(fp);
    printf("Fim do programa");
}