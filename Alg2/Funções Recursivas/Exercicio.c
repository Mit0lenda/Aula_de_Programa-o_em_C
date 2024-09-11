#include<stdio.h>
int function(int num,int num2){
    if (num2==1)
    {
        return num;
    }
        else{
            return num*function(num,num2-1);
        }
        
    }
int main(){
    int num,num2;
    printf("\nDigite o valor para num:");
    scanf("%d",&num);
    printf("\nDigite o valor para expoente:");
    scanf("%d",&num2);
    printf("\nResuldado:%d",function(num,num2));

}