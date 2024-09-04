#include <stdio.h>
void imprime(){
    printf("\n*******************\n");
}
int menu()
{
    int op;
    do{
    imprime();
    printf("\n 1_soma");
    printf("\n 2_subtrai");
    scanf("%d",&op);
    imprime();
    }while(op<1 || op>2);
    return op;
    
}
int soma(int v1,int v2){
    return v1+v2;
}
int subtrai(int v1,int v2){
    return v1-v2;
}
int main() {
int n1,n2,opcao;
opcao=menu();
imprime();
printf("informe1:");
scanf("%d",&n1);
imprime();
printf("informe2:");
scanf("%d",&n2);
imprime();
if(opcao == 1)
{
    printf("\n soma= %d",soma(n1,n2));
}    
else{
    printf("\n  subtrai=%d",subtrai(n1,n2));
}

    return 0;
}
