// Use a função da questão passada e lance o dado 10 de vezes. Conte quantas vezes cada número saiu.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int dado(){
    
    return  (rand()% 6) + 1;
}
int main (){
    int vezes[6] = {0};
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        int num = dado();
        printf("O numero sorteado de 1 a 6 :%d\n",num);
        vezes[num-1] ++;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Dado %d : %d\n",i+1,vezes[i]);
    }
    
    

}