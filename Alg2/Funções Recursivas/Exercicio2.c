#include <stdio.h>
float fuctionRecursividade(float n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (1 /n) *(fuctionRecursividade(n - 1));
    }
}
int main()
{
    float num;
    printf("Digite o valor de n:");
    scanf("%f", &num);
    printf("Resultado:%f", num*fuctionRecursividade(num));
}