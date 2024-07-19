#include <stdio.h>
int main()
{
    int codigo[10];
    int dia[10];
    int mes[10];
    float peso[10];
    char sexo[10];
    int opcao;
    int contador = 0;

    while (opcao != 5)
    {

        printf("\nMenu:\n");
        printf("1- Cadastramento da ave\n");
        printf("2- Peso médio dos perus da granja\n");
        printf("3- Quantidade de perus fêmeas\n");
        printf("4- Código da ave ou aves que nasceram em 0407\n");
        printf("5- Fim\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        if (contador >=10)
        {
            printf("Já teve cadastramento maximo de perus");
            break;
        }
            codigo[contador] =contador;
            printf("O codigo da ave cadastrada:%d",contador);
            printf("Qual seu dia de nascimento?");
            scanf("%d",&dia[contador]);
            printf("Qual seu mes de nascimento?");
            scanf("%d",&mes[contador]);
            printf("Qual o peso ?");
            scanf("%f",&peso[contador]);
            printf("Qual o genero?");
            scanf("%c",&sexo[contador]);
            contador+=1;
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            printf("Terminando Programa...");
            break;
        default:
            break;
        }
    }
}