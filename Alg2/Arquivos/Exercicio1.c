#include<stdio.h>
int main(){
    int i;
    FILE *fp;
    fp = fopen("dados.txt","w");
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo");
    } else {
        for ( i = 0; i < 100; i++)
        {
            fprintf(fp,"%d\n",i);
        }
        printf("Os numeros foram gravados com sucesso.");
    }
    fclose(fp);
}