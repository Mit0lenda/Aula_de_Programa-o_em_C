//Crie um programa que chama uma  função que recebe três valores (a,b e c), 
//que são os coeficientes de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'

#include<stdio.h>
float calcular (float val1,float val2 , float val3){
    return ((val2*val2)- 4*val1*val3);
}
int main(){
float val1,val2,val3;
printf("digite o valor para a: ");
scanf("%f",&val1);
printf("\n");
printf("digite o valor para b: ");
scanf("%f",&val2);
printf("\n");
printf("digite o valor para c: ");
scanf("%f",&val3);
printf("\n");
printf("O valor: %.2f",calcular(val1,val2,val3));
}