/*O que significa o operador asterisco em cada um dos seguintes casos?



 a) (0,1)  int *p;
    Utilizado para declarar um ponteiro do tipo inteiro.

 b) (0,2) *p = x*5;
    Utilizado para atribuir o valor de x*5 à variável apontada por p.

  c) (0,2) printf ("saida = %d", *(p+1));
    Utilizado para imprimir o valor da variável apontada por p+1.
  */
#include <stdio.h>
int main(){
    int x = 10;
    int *p;

        p=&x;
        *p =x*5;
        printf("Valor de x após a multiplicação: %d\n", x);	

        int arr[5] = {1, 2, 3, 4, 5};	
        p = arr;
        printf("Valor do primeiro elemento do array: %d\n", *p);
        printf("Valor do segundo elemento do array: %d\n", *(p+1));
}
