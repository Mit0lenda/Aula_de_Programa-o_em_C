// Faça um programa que implementa uma função que recebe, por parâmetro, a hora de início e a hora de término de um jogo.
// O procedimento deve retornar,  a duração do jogo em horas, considerando que o tempo máximo de duração de um jogo é de 24 horas
// e que o jogo pode começar em um dia e terminar no outro.
#include <stdio.h>
int tempo(int inicio, int fim)
{
    int final;
    if (fim < inicio)
    {
        fim += 24;
       final = fim - inicio;
    }else{
        if (fim - inicio == 0)
        {
            final = 24;
        }
        else{
            final = fim - inicio;
        }
    }
    return final;
}
int main()
{
    int inicio, fim, time, dia;

    printf("Que horas o jogo comecou?");
    scanf("%d", &inicio);

    printf("Que horas o jogo Terminou?");
    scanf("%d", &fim);

    time = tempo(inicio, fim);

    printf("O jogo durou: %d horas", time);

}