#include <stdio.h>

int main(){
    float salario;
    char setor;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite o setor: ");
    scanf(" %c", &setor);

    switch (setor) {
        case 'a':
            salario = salario + ((salario * 10) / 100);
            printf("Seu novo salario: R$%.2f", salario);
            break;
        case 'b':
            salario = salario + ((salario * 15) / 100);
            printf("Seu novo salario: R$%.2f", salario);
            break;
        case 'c':
            salario = salario + ((salario * 20) / 100);
            printf("Seu novo salario: R$%.2f", salario);
            break;
        case 'd':
            salario = salario + ((salario * 25) / 100);
            printf("Seu novo salario: R$%.2f", salario);
            break;
        case 'e':
            salario = salario + ((salario * 20) / 100);
            printf("Seu novo salario: R$%.2f", salario);
            break;
        default:
            printf("Setor invalido!");
    }
    return 0;
}
