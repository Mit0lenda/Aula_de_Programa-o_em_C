//1)	Escreva um programa que implementa o 
//uso de uma a função que calcule e retorne a 
//distância entre dois pontos ( x1, y1) e (x2, y2). 
//Todos os números e valores de retorno devem ser do tipo float.
#include<stdio.h>
float distancia(float x, float y){
return (y - x);
}
void imprime(){
    printf("\n");
}
int main (){
    float x1,x2,y1,y2,resultadox,resultadoy;
    printf("Digite distancia x1 ");
    scanf("%f",&x1);
    imprime();
    printf("Digite distancia x2 ");
    scanf("%f",&x2);
    imprime();
    printf("Digite distancia y1 ");
    scanf("%f",&y1);
    imprime();
    printf("Digite distancia y2 ");
    scanf("%f",&y2);
    imprime();
    resultadox = distancia(x1,x2);
    resultadoy = distancia(y1,y2);
    printf("A distancia dos dois pontos: %.2f e %.2f",resultadox,resultadoy);
}