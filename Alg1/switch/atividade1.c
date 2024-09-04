// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n1,n2,op;
    
    printf("Digite o valor:");
    scanf("%d",& n1);
    printf("Digite outro valor:");
    scanf("%d",& n2);
    printf("Qual a operação que desejá fazer \n 1)Soma \n 2)Subtração \n 3)Divisão \n 4)Multiplicação");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            printf("A opção selecionada foi soma .A soma dos numeros %d e %d:%d",n1,n2,n1+n2);
        break;
        case 2:
            printf("A opção selecionada foi subtração .A soma dos numeros %d e %d:%d",n1,n2,n1-n2);
        break;
        case 3:
            if (n2 == 0)
            {
                printf("Não pode ter divisão por zero!");
            }
            else
            {
                printf("A opção selecionada foi Divisão.A Divisão dos numeros %d e %d:%.2f",n1,n2,(float)n1/n2);
            }
        break;
        case 4:
                printf("A opção selecionada foi Multiplicação.A Multiplicação dos numeros %d e %d:%d",n1,n2,n1*n2);
        break;
        default:
        printf("Opção Invalida");
    }

    return 0;
}