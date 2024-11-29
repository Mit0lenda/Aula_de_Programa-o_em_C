#include<stdio.h>
#define MAX_LINHAS 50
#define TAMANHO_LINHA 256
int main(){
    char texto[MAX_LINHAS][TAMANHO_LINHA];
    char linha[TAMANHO_LINHA];
    int totalLinhas = 0,continuar = 1;
    FILE * fp;
    printf("Editor de texto\n");
    printf("Digite o texto. Quando terminar, digite 'FIM' em uma linha separada.\n");

    for (int i = 0; i < MAX_LINHAS && continuar; i++)
    {
        printf("Linha %d: ",i+1);
        // Lê uma linha do teclado
        fgets(linha, TAMANHO_LINHA,stdin);

        // Remove o '\n' do final da linha
        linha[strcspn(linha,"\n")] = '\0';

        if (strcmp(linha,"FIM") == 0)
        {
            continuar = 0;
        }
        else{
            strcpy(texto[i],linha);
            totalLinhas++;
        }
    }
    fp = fopen("texto_salvo.txt","w");
    if (fp == NULL)
    {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }
    // Salva o conteúdo do vetor no arquivo
    for (int i = 0; i < totalLinhas; i++)
    {
        fprintf(fp,"%s\n",texto[i]);
    }
    fclose(fp);
    printf("Texto salvo com sucesso.\n");
}