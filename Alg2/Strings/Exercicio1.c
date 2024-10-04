#include<stdio.h>
#include<string.h>
#include<ctype.h>
void inverte(char str[20]){
    for (int i = 0; i < 20; i++)
    {
        str[i] = toupper(str[i]);
    }
    
}
int main(){
    char str[20];
    printf("Digite uma string: ");
    gets(str);
    printf("String Original: %s\n",str);
    inverte(str);
    printf("String invertida: %s\n",str);
}