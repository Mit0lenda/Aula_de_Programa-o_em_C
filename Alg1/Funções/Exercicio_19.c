//Um professor, muito legal, 
//fez 3 provas durante um semestre mas só vai levar em conta as duas notas mais altas para calcular a média.
//Faça uma aplicação em C que peça o valor das 3 notas, mostre como seria a média com essas 3 provas, 
//a média com as 2 notas mais altas, bem como sua nota mais alta e sua nota mais baixa.
#include<stdio.h>
void media(float val1,float val2,float val3){
    float maior,menor,meio,media1,media2,media3;
if(val1 >= val2 && val1 >= val3) {
        maior = val1;
        if (val2 > val3) {
            meio = val2;
            menor = val3;
        } else {
            meio = val3;
            menor = val2;
        }
    } else if (val2 >= val1 && val2 >= val3) {
        maior = val2;
        if (val1 > val3) {
            meio = val1;
            menor = val3;
        } else {
            meio = val3;
            menor = val1;
        }
    } else {
        maior = val3;
        if (val1 > val2) {
            meio = val1;
            menor = val2;
        } else {
            meio = val2;
            menor = val1;
        }
    }
    media1= (maior+meio+menor)/3;
    media2= (maior+meio)/2;
    media3= (maior+menor)/2;
    printf("A media das 3 provas: %.2f\n",media1);
    printf("A media das 2 melhores provas: %.2f\n",media2);
    printf("A media da melhor prova com a pior nota: %.2f\n",media3);
    printf("A melhor nota:%.2f\n",maior);
    printf("A pior nota:%.2f\n",menor);
}
int main(){
    float val1,val2,val3;
    printf("Digite o valor da prova 1: ");
    scanf("%f",&val1);
    printf("Digite o valor da prova 2: ");
    scanf("%f",&val2);
    printf("Digite o valor da prova 3: ");
    scanf("%f",&val3);
    media(val1,val2,val3);
}