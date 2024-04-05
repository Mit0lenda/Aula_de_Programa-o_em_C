// Simule uma calculadora (soma,subtração,multiplicação e divisão).
// Crie um menu para o usuário solicitar o tipo da operação desejada.O programa,também solicita 2 valores para a realização das operações,eles são do tipo inteiro.
#include <stdio.h>
int main()
{
    int n1, n2, menu;
    printf("Escreve o valor do primeiro numero:");
    scanf("%d", &n1);
    printf("Escreva o valor do segundo numero:");
    scanf("%d", &n2);
    printf("Qual operação que ce deseja realizar:\n1)Soma\n2)Subtração\n3)Multiplicação\n4)Divisão\n");
    scanf("%d", &menu);
    if (menu < 1 || menu > 4)
    {
        printf("Qual operação que ce deseja realizar:\n1)Soma\n2)Subtração\n3)Multiplicação\n4)Divisão\n");
        scanf("%d", &menu);
    }
    else
    {
        if (menu == 1)
        {
            printf("A opção selecionada foi soma .A soma dos numeros %d e %d:%d",n1,n2,n1+n2);
        }
        else
        {
            if (menu == 2)
            {
                printf("A opção selecionada foi subtração.A subtração dos numeros %d e %d:%d",n1,n2,n1-n2);
            }
            else
            {
                if (menu == 3)
                {
                    printf("A opção selecionada foi Multiplicação.A Multiplicação dos numeros %d e %d:%d",n1,n2,n1*n2);
                }
                else
                {
                    if (menu == 4)
                    {
                        if (n1 == 0 || n2 == 0)
                        {
                            printf("Não pode ter divisão por zero!");
                        }
                        else
                        {
                            printf("A opção selecionada foi Divisão.A Divisão dos numeros %d e %d:%.2f",n1,n2,(float)n1/n2);
                        }
                    }
                    
                }
            }
            
        }
        
    }
}