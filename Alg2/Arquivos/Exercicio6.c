#include<stdio.h>
#include<string.h>
#define maxAlunos 2
typedef struct 
{
    float nota1;
    float nota2;
    float nota3;
    float media;
}Notas;
typedef struct
{
    char nome[30];
    Notas notas;
}Aluno;
int main(){
    FILE *fp;
    Aluno alunos[maxAlunos];
    int i;
    for ( i = 0; i < maxAlunos; i++)
    {
        printf("\nDigite o nome do aluno:");
        fgets(alunos[i].nome,30,stdin);
        alunos[i].nome[strcspn(alunos[i].nome,"\n")] = '\0';
        printf("Digite a nota 1 do aluno:");
        scanf("%f",&alunos[i].notas.nota1);
        while (alunos[i].notas.nota1<0 || alunos[i].notas.nota1>10)
        {
            printf("Digite a nota 1 do aluno:");
            scanf("%f",&alunos[i].notas.nota1);
        }
        printf("Digite a nota 2 do aluno:");
        scanf("%f",&alunos[i].notas.nota2);
        while (alunos[i].notas.nota2<0 || alunos[i].notas.nota2>10)
        {
            printf("Digite a nota 2 do aluno:");
            scanf("%f",&alunos[i].notas.nota2);
        }
        printf("Digite a nota 3 do aluno:");
        scanf("%f",&alunos[i].notas.nota3);
        while (alunos[i].notas.nota3<0 || alunos[i].notas.nota3>10)
        {
            printf("Digite a nota 3 do aluno:");
            scanf("%f",&alunos[i].notas.nota3);
        }
        alunos[i].notas.media = (alunos[i].notas.nota1+alunos[i].notas.nota2+alunos[i].notas.nota3)/3;
    getchar();
    }
    fp = fopen("alunos.txt","w");
    if (fp  == NULL)
    {
        printf("ERRo");
    }
    for ( i = 0; i < maxAlunos; i++)
    {
        fprintf(fp,"Aluno:%s;Nota1:%.2f;%.2f;%.2f;%.2f\n",alunos[i].nome,alunos[i].notas.nota1,alunos[i].notas.nota2,alunos[i].notas.nota3,alunos[i].notas.media);
    }
    fclose(fp);
    printf("Fim do programa");
}