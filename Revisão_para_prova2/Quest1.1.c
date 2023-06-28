//Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, na ordem,
//os tempos registrados em cada volta. Fazer um programa em C 
//para ler os tempos das N voltas, calcular e imprimir: 
//melhor tempo; 
//a volta em que o melhor tempo ocorreu; 
//tempo médio das N voltas.
#include<stdio.h>
int main()
{
    int volta=0,fora=0,cont=0;
    float tempo=0,t_tempo=0,e_tempo=0,soma=0;
    while(fora==0)
    {
    volta++;
    printf("volta:%d\n",volta);
    printf("Tempo de volta:");
    scanf("%f",&tempo);
    soma+=tempo;
    if(volta==1)
    {
        t_tempo=tempo;
        cont = 1;
    }
    if(tempo<=t_tempo)
    {
        t_tempo=tempo;
        cont = volta;
    }
printf("Digite 1 para parar ou 0 para continuar as voltas");
scanf("%d",&fora);
    }
    printf("O melhor tempo:%f\nA volta em que teve a melhor volta %d\nTempo medio de %d  voltas:%f",t_tempo,cont,volta,soma/volta);
}
