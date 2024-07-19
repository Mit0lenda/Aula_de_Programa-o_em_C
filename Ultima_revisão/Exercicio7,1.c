#include <stdio.h>
int leituraDeDados()
{
    int idade;
    printf("Digite sua idade:");
    scanf("%d", &idade);
    while (idade < 0)
    {
        printf("\nInvalido!");
        printf("\nDigite sua idade:");
        scanf("%d", &idade);
    }
    return idade;
}
int energetico()
{
    int bebe;
    printf("\nVc bebe Energetico:1)sim 2)nao");
    scanf("%d", &bebe);
    while (bebe < 1 || bebe > 2)
    {
        printf("\nInvalido,Digite Novamente!");
        printf("\nVc bebe Energetico:1)sim 2)nao");
        scanf("%d", &bebe);
    }
    return bebe;
}
int quantidadeBebida()
{
    int semana;
    printf("Qual a quantidade que vc bebe por semana:");
    scanf("%d", &semana);
    while (semana <0)
    {
        printf("Qual a quantidade que vc bebe por semana:");
        scanf("%d", &semana);
    }
    return semana;
}
float mediaEntrevistados(int quantidadeIdade, int somaDeIdades)
{
    return (float)somaDeIdades / quantidadeIdade;
}
float mediaDosEnergeticos(int somaDeEnergeticos, int quantidadeEnergeticos)
{
    return (float)somaDeEnergeticos / quantidadeEnergeticos;
}
int main()
{
    int idades = 1, quantidadeIdade = 0, somaDeIdades=0, menorIdade = 0;
    int bebeEner, quantidadeEnergeticos = 0, bebido, naoBebe = 0, bebeMaiorIdade = 0, maiorQuantidadeBebida = 0, somaDeEnergeticos=0;
    float mediaBebida=0,mediaDasIdades=0;
    while (idades != 0)
    {
        idades = leituraDeDados();
        if (idades > 0)
        {
            quantidadeIdade += 1;
            somaDeIdades += idades;
            if (menorIdade > idades || menorIdade == 0)
            {
                menorIdade = idades;
            }
            bebeEner = energetico();
            if (bebeEner == 1)
            {
                if (bebeMaiorIdade < idades || bebeMaiorIdade == 0)
                {
                    bebeMaiorIdade = idades;
                }
                bebido = quantidadeBebida();
                somaDeEnergeticos += bebido;
                quantidadeEnergeticos += 1;
                if (maiorQuantidadeBebida < bebido)
                {
                    maiorQuantidadeBebida = bebido;
                }
            }
            else
            {
                naoBebe += 1;
            }
        }
    }
    mediaDasIdades = mediaEntrevistados(quantidadeIdade, somaDeIdades);
    mediaBebida = mediaDosEnergeticos(somaDeEnergeticos, quantidadeEnergeticos);
    printf("\nA quantidade de entrevistados:%d", quantidadeIdade);
    printf("\nA menor idade dos entrevistados:%d", menorIdade);
    printf("\nA maior idadde entre as pessaos que bebem energético:%d", bebeMaiorIdade);
    printf("\nA maior quantidade de energeticos que uma pessoa bebe:%d", maiorQuantidadeBebida);
    printf("\nA media das idades dos entrevistados:%.2f", mediaDasIdades);
    printf("\nA media de energeticos consumidos por semana:%.2f", mediaBebida);
    printf("\nA quantidade de jovens que nao bebem energeticos:%d", naoBebe);
}