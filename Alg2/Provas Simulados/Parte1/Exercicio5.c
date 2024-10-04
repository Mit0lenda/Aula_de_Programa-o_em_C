/*Elabore um programa que mostre o endereço de memória onde uma variável do tipo inteiro foi armazenada. 
Para isso leia um valor para a variável e logo após imprima o dado lido e o endereço de memória da mesma.
*/
#include <stdio.h>
int main(){
    int x;
    printf("Digite um valor para x:");
    scanf("%d",&x);
    printf("O valor de x e %d e o endereco de memoria de x : %p\n",x,&x);
}