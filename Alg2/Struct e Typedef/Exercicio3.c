#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
typedef struct dma{
    int dia;
    int mes;
    int ano;
}date;
typedef struct cadastro
{
    char nome[30];
    date data;
    char endereco[50];
    int cep;
    char email;
};
int veriData(int dia,int mes,int ano){
    if (dia>31 || dia<1)
    {
        return 0;
    }
    if (mes>12 || mes<1)
    {
        return 0;
    }
    if (ano<1900 || ano>2024)
    {
        return 0;
    }
    return 1;
}
char veriEmail(const char email[]){
    const char 
    if (isalpha(email[0]) && email[0]!='@' && email[0]!='.')
    {
        return 0;
    }
    return 1;
}
int veriCep(int cep){

}
int main(){
    struct cadastro pessoa;
    char nome[30];
    int dia,mes,ano;
    char endereco[50];
    int cep;
    char email[50];
    int Corretos=0,i;
    while (corretos == 3)
    {
    printf("Digite o nome:");
    fgets(nome,30,stdin);
    while (Corretos!=0)
    {
        printf("Digite o dia:");
        scanf("%d",&dia);
        printf("Digite o mes:");
        scanf("%d",&mes);
        printf("Digite o ano:");
        scanf("%d",&ano);
        Corretos+=veriData(dia,mes,ano);
        if (Corretos =0)
        {
            printf("Data invalida!Tente Novamente.\n");
        }
    }
    printf("Data de Nascimento valida!\n");
    printf("Digite o endereco:");
    fgets(endereco,50,stdin);

    while (Corretos!=1)
    {
        printf("Digite o cep:");
        scanf("%d",&cep);
        Corretos+=veriCep(cep);
        if (Corretos =1)
        {
            printf("Cep invalido!Tente Novamente.\n");
        }
    }
    printf("CEP valido!\n");

    while (Corretos!=2)
    {
        printf("Digite o email:");
        fgets(email,50,stdin);
        Corretos+=veriEmail(email);
        if (Corretos =2)
        {
            printf("Email invalido!Tente Novamente.\n");
        }        
    }
    printf("Email valido !\n");
    }
    printf("Cadastro realizado com sucesso");
}