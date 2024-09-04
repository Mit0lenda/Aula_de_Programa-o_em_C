//Faça um programa que implemente uma função que recebe a idade de um nadador por parâmetro e retorna a categoria desse nadador de acordo com a tabela abaixo: 
#include<stdio.h>
int verificacao (int idade){
    int verifi = 0;
if (idade >= 18)
    {
        verifi = 1;
    } else {
        if (idade >= 14 && idade <= 17)
        {
            verifi = 2;
        }
        else{
            if (idade >= 11 && idade <= 13)
            {
                verifi = 3;
            }
            else{
                if (idade >= 8 && idade <= 10){
                    verifi = 4;
                }
                else{
                    if (idade >= 5 && idade <= 7)
                    {
                        verifi = 5;
                    }
                    
                }
                
            }
        }
    }
    return verifi;
}
int main(){
    int idade,categoria;
    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    printf("\n");
    categoria = verificacao(idade);
    switch (categoria)
    {
    case 1:
        printf("Sua categoria Adulto \n");
        printf("Pois sua idade: %d\n",idade);
    break;
    case 2:
            printf("Sua categoria Juvenil B \n");
        printf("Pois sua idade: %d\n",idade);
    break;
    case 3:
            printf("Sua categoria Juvenil A \n");
        printf("Pois sua idade: %d\n",idade);
    break;
    case 4:
            printf("Sua categoria Infantil B \n");
        printf("Pois sua idade: %d\n",idade);
    break;
    case 5:
            printf("Sua categoria Infantil A \n");
        printf("Pois sua idade: %d\n",idade);
    break;
    default:
            printf("Sem categoria");
        break;
    }
}