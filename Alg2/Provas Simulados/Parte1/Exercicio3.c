/*Considere a função recursiva func definida por:
func(1) = 1
func(n) = (n - 1) * func(n - 1)
Assinale a alternativa que apresenta os valores para  func(4) e func(5), respectivamente?
Escolha uma opção:
a.
24 e 28
b.
24 e 120
c.
6 e 24
d.
6 e 12
e.
12 e 28
*/
#include <stdio.h>
int func(int n){
    if (n ==1)
    {
        return 1;
    }
    else
    {
        return (n - 1) * func(n - 1);
    }
}

int main(){
    printf("%d\n", func(4));
    printf("%d\n", func(5));
}