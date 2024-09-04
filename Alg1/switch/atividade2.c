// Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips. Faça um programa que calcule o valor total a ser pago por uma pessoa. O programa deverá ler o valor total da compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3).
#include <stdio.h>
int main() {
    float n1;
    int op;
    
    printf("Qual o valor da compra:");
    scanf("%f",&n1);
    if(n1<=0)
    {
        printf("Valor inválido");
    }
    printf("Vc é :\n 1)Funcionário \n 2)VIP \n 3)Cliente\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            printf("\nO valor total é de %f mas com seu desconto de 10%, ficara %.2f",n1,n1-(n1* 0.1));
        break;
        case 2:
            printf("\nO valor total é de %f mas com seu desconto de 5%, ficara %.2f",n1,n1-(n1* 0.05));
        break;
        case 3:
            printf("\nO valor total é de %.2f",n1);
        break;
        default:
    }

    return 0;
}