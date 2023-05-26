//1)	Escreva um programa que implementa o uso de uma a função que calcule e retorne a distância entre dois pontos ( x1, y1) e (x2, y2). Todos os números e valores de retorno devem ser do tipo float.
#include <stdio.h>
#include <math.h>
float calcule(float v1,float v2,float n1,float n2)
{
    float distancia;
    distancia=sqrt(pow (v2-v1,2)+pow(n2-n1,2));
    return distancia;
}
int main(){
    float x1,x2,y1,y2;
    printf("Digite o valor de x1:");
    scanf("%f",&x1);
    printf("\nDigite o valor de x2:");
    scanf("%f",&x2);
    printf("Digite o valor de y1:");
    scanf("%f",&y1);
    printf("Digite o valor de y2:");
    scanf("%f",&y2);
    printf("Distancia é Dxy= %f",calcule(x1,x2,y1,y2));
    
}
