//Usando as 3 funções acima, crie um programa que calcula as raízes de uma equação do 2o grau:
//ax² + bx + c=0
//Para ela existir, o coeficiente 'a' deve ser diferente de zero.
//Caso o delta seja maior ou igual a zero, as raízes serão reais. Caso o delta seja negativo, as reais serão complexas e da forma: x + iy
#include<stdio.h>
#include<math.h>
void imprime(){
printf("\n");
}

int calcular_delta(int val1,int val2,int val3){
    return (val2 * val2) - (4*val1*val3);
}
void calcular_raizes_reais(int val1,int val2,int delta,int raizes[2]){
    raizes[0] = (- val2 + sqrt(delta)) / (2* val1);
    raizes[1] = (-val2 - sqrt(delta)) / (2* val1);
}
void calcular_raizes_complexas(int val1,int val2,int delta,int raizes[2]){
    raizes[0] = -val2 / (2 * val1);
    raizes[1] = sqrt(-delta) / (2 * val1);
}
int main (){
int val1,val2,val3;
int delta;
int raizes[2];

    printf("digite o valor para a: ");
    scanf("%d",&val1);
    imprime();
while (val1 < 1)
{
    printf("Somente valores acima de 0\n");
    printf("digite o valor para a: ");
    scanf("%d",&val1);
    imprime();
}


printf("digite o valor para b: ");
scanf("%d",&val2);
imprime();

printf("digite o valor para c: ");
scanf("%d",&val3);
imprime();

delta = calcular_delta(val1,val2,val3);

if (delta > 0)
{
    calcular_raizes_reais(val1,val2,delta,raizes);
    printf("As raizes sao reais e distintas:\n");
    printf("Raiz 1: %d \n",raizes[0]);
    printf("Raiz 2: %d \n",raizes[1]);
} else {
    if (delta == 0)
    {
        raizes[0] = -val2 / (2*val1);
        printf("As raizes sao reais e iguais:\n");
        printf("Raiz: %d \n",raizes[0]);
    }
    else {
        calcular_raizes_complexas(val1,val2,delta,raizes);
        printf("As raizes sao complexas:\n");
        printf("Raiz 1: %d + %d \n",raizes[0],raizes[1]); 
        printf("Raiz 2: %d + %d \n",raizes[0],raizes[1]);

    }
    
}

}