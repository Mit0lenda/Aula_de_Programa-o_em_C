#include <stdio.h>
#include <string.h>

voi quest(int resposta)
{
    int numeroDeAcertos;

}
int main()
{

    int numMatriculas;
    int i;
    int matriculado[20];
    char resposta;
    printf("Qual o numero de matriculados");
    scanf("%d",&numMatriculas);
    if (numMatriculas > 0)
    {
        for ( i = 0; i < numMatriculas; i++)
        {
            matriculado[i]= quest();
        }
        
    } else {
        printf("Finalizando...");
    }
}