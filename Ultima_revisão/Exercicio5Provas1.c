#include<stdio.h>
void corrida(){
    float voltas[5];
    int melhorVolta=0;
    float media=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Qual o tempo da volta %d: ",i+1);
        scanf("%f",&voltas[i]);
        while (voltas[i] <= 0)
        {
            printf("Digite novamente!\n");
            printf("Qual o tempo da volta %d: ",i+1);
            scanf("%f",&voltas[i]);
        }
        if (i==0 || voltas[i] < voltas[melhorVolta])
        {
            melhorVolta = i;
        }
        media += voltas[i];
    }
    printf("O melhor tempo é %f",voltas[melhorVolta]);
    printf("\nA volta que o melhor tempo ocorreu %d",melhorVolta+1);
    printf("\nTempo medio das 5 voltas:%f",media/5);
    
}
int main(){
    corrida();
}