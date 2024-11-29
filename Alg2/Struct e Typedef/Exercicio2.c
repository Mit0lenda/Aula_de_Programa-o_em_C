#include<stdio.h>
#include<stdlib.h>
struct turma
{
    char nome[30];
    int nota[3];
    int matricula;
    float mediaAluno;
};
float media(struct turma aluno){
    return(aluno.nota[0]+aluno.nota[1]+aluno.nota[2])/3;
}
int main(){
    struct turma aluno[2];
    int i,maior=0;
    float mediaMaior=0,mediaMenor=11;
    for(i=0;i<2;i++){
        printf("Digite o nome do aluno:");
        scanf("%s",aluno[i].nome);
        printf("Digite a matricula do aluno:");
        scanf("%d",& aluno[i].matricula);
        printf("Digite a nota 1 do aluno:");
        scanf("%d",& aluno[i].nota[0]);
        printf("Digite a nota 2 do aluno:");
        scanf("%d",& aluno[i].nota[1]);
        printf("Digite a nota 3 do aluno:");
        scanf("%d",& aluno[i].nota[2]);
        aluno[i].mediaAluno= media(aluno[i]);
        if (aluno[i].mediaAluno>=6)
        {
            printf("Aprovado");
            printf("Nome:%s\n",aluno[i].nome);
        }
        else{
            printf("Reprovado");
            printf("Nome:%s\n",aluno[i].nome);
        }
    }
    for ( i = 0; i < 2; i++)
    {
        if (aluno[i].mediaAluno>maior)
        {
            mediaMaior=aluno[i].mediaAluno;
        }
        if (aluno[i].mediaAluno<mediaMenor)
        {
            mediaMenor=aluno[i].mediaAluno;
        }
        if (aluno[i].nota[0]>maior)
        {
            maior=aluno[i].nota[0];
        }
                       
    }
    printf("\nA maior nota:%.2d",maior);
    printf("\nA media da maior nota:%.2f",mediaMaior);
    printf("\nA menor media:%.2f",mediaMenor);
}
