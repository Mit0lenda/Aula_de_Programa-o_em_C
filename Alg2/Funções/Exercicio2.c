#include<stdio.h>
int main(){
    int vet1[20],aux,cont=0,posicao=0;
    for(int i=0;i<20;i++){
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&vet1[i]);
    }
    printf("Digite o valor que quer encontrar: ");
    scanf("%d",&aux);
    for(int i=0;i<20;i++){
        if (aux == vet1[i])
        {
            cont++;
            if (cont ==1)
            {
                posicao = i;
            }
            
        }
    }
    if (cont != 0)
    {
        printf("O valor %d foi encontrado %d vezes e a primeira posição %d\n",aux,cont,posicao+1);
    }
    else{
        printf("O valor %d não foi encontrado\n",aux);
    }
    
}