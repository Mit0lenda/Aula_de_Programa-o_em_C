//Leitura de Arquivos
#include<stdio.h>
int main(){
    FILE *fp;
    int numero;
    fp = fopen("dados.txt","r");
    if (fp == NULL)
    {
        printf("ERRO");
    }
    printf("Numeros lidos do arquivo:\n");
    //Le os numeros do arquivo ate o final
    while(fscanf(fp,"%d",&numero) == 1)//Le um numero de cada vez
    {
        printf("%d\n",numero);
    }
    fclose(fp);
}