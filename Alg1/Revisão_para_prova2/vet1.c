//Crie um vetor de 20 posições de inteiros.  
//Após o vetor estar todo preenchido com valores informados pelo teclado, solicite ao usuário a informação de um número, o qual será procurado no vetor. 
//Se o valor for encontrado informe em que posição ele se encontra (a primeira, caso ele esteja armazenado em mais de uma posição). 
//Utilize mensagem adequada para o caso do valor não estar armazenado no vetor.
#include<stdio.h>
int main()
{
    int vetor[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19},v,selec,to,vec=0;
    printf("Digite o numero que deseja:");
    scanf("%d",&selec);
    for (v=0;v<20;v++)
    {
        printf(" %d ",v);
        if (vetor[v]==selec)
        {
            to=v;
            vec=1;
        }
    }
    if (vec==1)
    {
        printf("\n a posicao:%d",to);
    }
    else{
        printf("\nnao se encontra");
    }
    
}