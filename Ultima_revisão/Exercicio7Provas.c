#include <stdio.h>
int quantidadeEntrevistados(int quantidade){
    return quantidade;
}
float mediaDasIdades(int quantidadeDeEntre,int somaDeIdades){
    return (float)somaDeIdades/quantidadeDeEntre;
}
float mediaDeEnergetico(int quantidadeDeEner, int somaDeQuantidadeEnger){
    return (float)somaDeQuantidadeEnger/quantidadeDeEner;
}
int menorIdade(int menor){
    return menor;
}
int maiorIdade(int maior){
    return maior;
}
int maiorQuantidade(int quantidade){
    return quantidade;
}
int naoBebem(int naoBebe){
return naoBebe;
}
void jovens()
{
    int idade = 1;
    int bebeEnergetico;
    int quantidadeDeEnergetico=0;
    int menorDeIdade = 0;
    int maiorDeIdade = 0;
    int menorDeIdadeEntre = 0;
    int quantDeEntrevistados = 0;
    int maiorIdadeDePessoas = 0;
    int maiorQuantidadeDeEner = 0;
    int quantidadeDeJovensQueNao = 0;
    int somaDeIdades=0;
    int somaDeQuantidadesEnger=0;
    while (idade > 0)
    {
        printf("Digite sua idade:");
        scanf("%d", &idade);
        if (idade > 0)
        {
            quantDeEntrevistados += 1;
            somaDeIdades += idade;
            if (menorDeIdadeEntre == 0)
            {
                menorDeIdadeEntre = idade;
            }
            else
            {
                if (menorDeIdadeEntre > idade)
                {
                    menorDeIdadeEntre = idade;
                }
            }
            if (idade < 18 || idade > 1)
            {
                menorDeIdade += 1;
            }
            else
            {
                maiorDeIdade += 1;
            }
            printf("\nbebeEnergetico:1)sim 2)nao");
            scanf("%d", &bebeEnergetico);
            while (bebeEnergetico < 1 || bebeEnergetico > 2)
            {
                printf("Digite Novamente!");
                printf("\nbebeEnergetico:1)sim 2)nao");
                scanf("%d", &bebeEnergetico);
            }
            switch (bebeEnergetico)
            {
            case 1:
                printf("\nQual a quantidade por semana");
                scanf("%d", &quantidadeDeEnergetico);
                while (quantidadeDeEnergetico < 0)
                {
                    printf("\nQual a quantidade por semana");
                    scanf("%d", &quantidadeDeEnergetico);
                }
                somaDeQuantidadesEnger+=quantidadeDeEnergetico;
                if (maiorIdadeDePessoas == 0 && maiorQuantidadeDeEner == 0)
                {
                    maiorIdadeDePessoas = idade;
                    maiorQuantidadeDeEner = quantidadeDeEnergetico;
                }
                else
                {
                    if (maiorIdadeDePessoas < idade)
                    {
                        maiorIdadeDePessoas = idade;
                    }
                    if ( maiorQuantidadeDeEner < quantidadeDeEnergetico)
                    {
                        maiorQuantidadeDeEner = quantidadeDeEnergetico;
                    }
                    
                }
                break;
            case 2:
                quantidadeDeJovensQueNao += 1;
                break;
            }
        }
    }
    quantidadeEntrevistados(quantDeEntrevistados);
    menorIdade(menorDeIdadeEntre);
    maiorIdade(maiorIdadeDePessoas);
    maiorQuantidade(maiorQuantidadeDeEner);
    mediaDasIdades(quantDeEntrevistados,somaDeIdades);
    mediaDeEnergetico(quantidadeDeEnergetico,somaDeQuantidadesEnger);
    naoBebem(quantidadeDeJovensQueNao);
}

int main()
{
    jovens();
    printf("\nA quantidade que participaram %d",quantidadeEntrevistados);
    printf("\nA menor idade:%d",menorIdade);
    printf("\nA maior idade dos que bebem:%d",maiorIdade);
    printf("\nA maior quantidade que uma pessoa bebe:%d",maiorQuantidade);
    printf("\nA media de entrevistados:%.2f",mediaDasIdades);
    printf("\nA media de energeticos:%.2f",mediaDeEnergetico);
    printf("\nA quantidade de quem nao bebe:%d",naoBebem);

}