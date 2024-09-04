#include <stdio.h>

int main ()
{
    int x = 17;
    float y = 3.2;
    float result = 0;
    char escolha;
    printf("Escolha qual das operações queira fazer \n a) x /4 + y \n b)x <=y *6 \n c)(x % 4) + ((int)y*10) \n d)(x / 6 - x /3)+4\n");
    scanf("%c",&escolha);
    switch(escolha)
    {
    case 'a':
    result=( x /4.0 + y);
        printf("A operação desejada foi x /4 + y = %.2f",result);
    break;
    case 'b':
    result = (x <= y * 6);
    printf("A operação desejada foi x <= y * 6 = %s\n", result ? "Verdadeiro" : "Falso");
    break;
    case 'c':
        result = ((x % 4) + ((int)y*10));
        printf("A operação desejada foi (x % 4) + ((int)y*10) = %.2f",result);
    break;
    case 'd':
        result = (x / 6 - x /3) + 4;
        printf ("A operação desejada foi (x / 6 - x /3)+4 = %.2f",result);
    break;
    default:
        printf("Opção inválida.\n");
    }
}
