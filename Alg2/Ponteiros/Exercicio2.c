#include<stdio.h>
void function(int *n1,int *n2){
    int n3;
     n3 = *n1;
    *n1 = *n2;
    *n2 = n3;
}
int main(){
    int n1,n2;
    printf("\nDigite valor para n1:");
    scanf("%d",&n1);
    printf("\nDigite valor para n2:");
    scanf("%d",&n2);
    printf("\nInvertendo n1 para n2:");
    function(&n1,&n2);
    printf("\nN1:%d",n1);
    printf("\nN2:%d",n2);
}