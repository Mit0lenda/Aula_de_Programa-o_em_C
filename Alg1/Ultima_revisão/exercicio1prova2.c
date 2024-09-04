#include <stdio.h>
int recebenota();
char recebetipomedia();
float medianotas(float nota1,float nota2,float nota3,char tipo_media);
int main()
{
    float nota1, nota2, nota3, media;
    char tipo_media;
    nota1 = recebenota();
    nota2 = recebenota();
    nota3 = recebenota();
    tipo_media = recebetipomedia();
    media = medianotas(nota1,nota2,nota3,tipo_media);
    if (tipo_media == 'A')
    {
        printf("A média aritmética foi = %f", media);
    }
    else
    {
        printf("A média ponderado foi = %f", media);
    }
}
int recebenota()
{
  float nota;
  printf("Digite sua nota: ");
  scanf("%f",&nota);
  while (nota < 0 || nota > 10)
  {
    printf("Digite sua nota: ");
    scanf("%f",&nota);
  }
  return nota;
}
char recebetipomedia()
{
    char tipo;
    printf("Qual forma vai ser a media:A-aritmetica ou P_pomodora");
    gets(tipo);
    while (tipo !='A' && tipo !='P')
    {
        printf("Qual forma vai ser a media:A-aritmetica ou P_pomodora");
        gets(tipo);
    }
    return tipo;
}
float medianotas(float nota1,float nota2,float nota3,char tipo_media)
{
    float media_total;
    if (tipo_media=='A')
    {
        media_total=(nota1+nota2+nota3)/3;
    }
    else
    {
        media_total=((nota1*5)+(nota2*3)+(nota3*2))/10;
    }
    return media_total;
}