//Uma pesquisa está sendo realizada para saber o perfil das pessoas que participam de shows de música.  
//Para isso algumas perguntas são realizadas para possibilitar a geração de algumas informações. 
//O programa será utilizado por um entrevistador que irá até a frente da casa de shows ou do estádio onde está ocorrendo 
//o evento e irá entrevistar as pessoas que estão na fila aguardando a entrada. Não se sabe quantos serão as pessoas entrevistadas (a quantidade de pessoas), 
//por isso, utilize a estratégia de informar ZERO na idade da pessoa para finalizar a coleta de dados da pesquisa e daí possibilitar gerar e mostrar os dados das saídas esperadas.
// Portanto, no final da entrevista deseja-se saber a quantidade de pessoas entrevistadas, 
//a média das idades das pessoas entrevistadas que estão indo a primeira vez em um show 
//(isto é, nas perguntas o pesquisador deve perguntar se é o primeiro show que a pessoa está indo ou não).
// A pesquisa também deseja saber qual o tipo de música que os entrevistados mais gostam(informe o tipo de música mais votado naquele grupo de entrevistados). 
//Use para as músicas a seguinte legenda: 1 - pop, 2- rock, 3 - pagode e 4 - sertanejo. Cada entrevistado deve responder apenas 1 tipo de música. 
//Faz parte da avaliação a identificação dos dados de entrada necessários para o desenvolvimento do programa e as validações necessárias para os dados de entrada.
//Faça a consitência de dados de entrada, tais como a idade, o tipo de música, etc.
//Use identação do código e o nome das funções e das variáveis devem seguir as boas práticas discutidas em aula.
//Observe: Obrigatoriamente utilize uma função para calcular a média e outra para imprimir uma linha de * ao informar as saídas, como no exemplo:
//****************
//Quantidade de pessoas entrevistadas
//*****************
//média das idades das pessoas entrevistadas que estão indo a primeira vez em um show
//*****************
//qual o tipo de música que os entrevistados mais gostam
//****************
#include<stdio.h>
void imprime(){
    printf("/n***********************/n");
}
int main(){
int quant_p=0,idade=1,show=0,i,musica[i],medi=0;
while(idade==0)
{
    printf("Qual sua idade ?");
    scanf("%d",&idade);
    quant_p++;
    i++;
    printf("Seu primeiro show ?1-sim 2-nao");
    scanf("%d",&show);
    if (show==1)
    {
        idade=media(medi);
    }
    
    printf("Tipo de musica preferida:1-Pop 2-Rock 3-Pagode 4-Sertanejo");
    scanf("%d",&musica[i]);
}
imprime();
printf("Media da idade:%d",media(idade));
imprime();
}
 int media(int idade){
    int j,me=0,total=0,fim;
    idade=me;
    me++;
    j++;
    for (j=0;j<me;j++)
    {
        me+total;
    }
     total/j=fim;
    return fim;
}
