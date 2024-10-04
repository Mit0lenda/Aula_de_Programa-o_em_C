/*A Uergs possui seus conceitos atribuídos conforme as notas dos alunos em uma escala. O professor ao longo do semestre atribui notas a cada uma das provas e gera uma média final, porém ao lançar no Solis deve transformar a nota em um conceito e para isso utiliza a seguinte regra:
              - 0 até 5,9 conceito D

              - 6 até 7.9 conceito C

              - 8 até 9,5 conceito B

              - 9,6 até 10 conceito A

Existe o conceito D, porém este é controlado pelo número de faltas do aluno, o que não entra no escopo deste programa.

Seu papel será o desenvolver um programa que realiza a leitura das notas das 2 provas e do trabalho realizados por cada um dos 15 alunos de uma turma.
Crie um estrutura estática para armazenar cada uma das notas e calcule a média seguindo a regra: P1 com peso 3, prova 2 com peso 6 e trabalho com peso 1.
A leitura das notas de cada prova e do trabalho são realizadas no main. Deve-se chamar uma função calcular a média, a qual deverá ser impressa no main,
onde após é chamada uma função para criar a estrutura para os conceitos dos alunos, que posteriormente terá o conceito impresso no main juntamente com o código do aluno
, que é representado pelo índice da estrutura estática.

Obs.: Para considerar correto o programa deve-se utilizar as funções solicitadas na especificação.*/

#include <stdio.h>
#include <stdlib.h>

float calcular_media(float p1, float p2, float trab)
{
    return (p1 * 3 + p2 * 6 + trab) / 10;
}
char conceito(float media)
{
    if (media >= 0 && media <= 5.9)
    {
        return 'D';
    }
    else
    {
        if (media >= 6 && media <= 7.9)
        {
            return 'C';
        }
        else
        {
            if (media >= 8 && media <= 9.5)
            {
                return 'B';
            }
            else
            {
                return 'A';
            }
        }
    }
}
int main(){
    float vet_aluno[15];
    float p1, p2, trab;
    int i;
    for (i = 0; i < 15; i++)
    {
        printf("Digite a nota da prova 1 do aluno %d:", i + 1);
        scanf("%f", &p1);
        while (p1 < 0 || p1 > 10)
        {
            printf("Digite novamente a nota da prova 1 do aluno %d:", i + 1);
            scanf("%f", &p1);
        }
        printf("Digite a nota da prova 2 do aluno %d:", i + 1);
        scanf("%f", &p2);
        while (p2 < 0 || p2 > 10)
        {
            printf("Digite novamente a nota da prova 2 do aluno %d:", i + 1);
            scanf("%f", &p2);
        }
        printf("Digite a nota da Trabalho do aluno %d:", i + 1);
        scanf("%f", &trab);
        while (trab < 0 || trab > 10)
        {
            printf("Digite novamente a nota da Trabalho do aluno %d:", i + 1);
            scanf("%f", &trab);
        }
        vet_aluno[i] = calcular_media(p1, p2, trab);
        printf("O aluno %d obteve a media %.2f\n", i + 1, vet_aluno[i]);
        printf("O aluno obteve o seguinte conceito:%c\n", conceito(vet_aluno[i]));
    }
}