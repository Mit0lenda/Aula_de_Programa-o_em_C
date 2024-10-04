#include<stdio.h>
#include<string.h>
#include<ctype.h>
void procurar(char str[15],char str2[2]){
    int num=0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == str2)
        {
            num+=1;
        }
    }
    printf("A Letra escolhida %s apareceu %d na palavra %s",str2[0],num,str);    
}
int main(){
    char str[15],str2[2];

    printf("Digite uma string: ");
    gets(str);
    
    printf("Digite a letra:");
    gets(str2);
    
    procurar(str,str2);
}