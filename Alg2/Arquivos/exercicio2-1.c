//Faça um programa que crie um arquivo BINÁRIO em disco, com o nome “dados.bin”,
// e escreva neste arquivo em disco uma contagem que vá de 1 até 100, 
//com um número em cada linha. 
//Abra este arquivo em um editor de textos e observe como ficou o seu conteúdo.
#include<stdio.h>
int main(){
    int i;
    FILE *fp;
    fp = fopen("dados.bin", "wb");
    if(fp == NULL){
        printf("Erro");
    } else {
        for (i = 0; i < 100; i++)
        {
            fwrite(&i, sizeof(int), 1, fp);
        }
        printf("Os numeros foram gravados com sucesso.");
    }
    fclose(fp);
}