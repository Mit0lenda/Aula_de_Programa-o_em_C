//Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio, um número de 1 até 6.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int dado(){
    int numero_aleatorio;
    srand(time(0));
    return numero_aleatorio = (rand()% 6) + 1;
}
int main (){
printf("O numero sorteado de 1 a 6 :%d",dado());
}