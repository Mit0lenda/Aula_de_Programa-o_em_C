//Faça um programa que implemente uma função que recebe a idade de um nadador por parâmetro e retorna a categoria desse nadador de acordo com a tabela abaixo: 


//Nao  fazer assim

#include<stdio.h>
#include<string.h>
void categoria(int idade,char*cat){
    if (idade >= 18)
    {
        strcpy (cat,"adulto");
    } else {
        if (idade >= 14 && idade <= 17)
        {
            strcpy(cat , "Juvenil B");
        }
        else{
            if (idade >= 11 && idade <= 13)
            {
                strcpy(cat ,"Juvenil A");
            }
            else{
                if (idade >= 8 && idade <= 10){
                    strcpy(cat , "Infantil B");
                }
                else{
                    if (idade >= 5 && idade <= 7)
                    {
                        strcpy(cat, "Infantil A");
                    }
                    
                }
                
            }
        }
    }
}
int main(){
    int idade;
    char nadador[15];

    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    printf("\n");

    categoria(idade,nadador);
    printf("Sua categoria: %s\n",nadador);
    printf("Pois sua idade: %d\n",idade);
}