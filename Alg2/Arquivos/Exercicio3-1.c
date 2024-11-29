//Leitura de Arquivos binarios
#include<stdio.h>
int main(){
    FILE *fp;
    int numero;
    fp = fopen("dados.bin","rb");
    if (fp == NULL)
    {
        printf("ERRO");
    }
    printf("Numeros lidos do arquivo:\n");
    //Le os numeros do arquivo binario ate o final
    while(fread(&numero, sizeof(int), 1,fp)== 1){
        printf("%d\n",numero);
    }
    fclose(fp);
}