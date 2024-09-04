//Uma empreiteira deseja saber quantos metros de piso, a quantidade de peças e qual o valor total irá gastar na compra de pisos de cerâmica de uma residência que está construindo. 
//Como o programa deve ser genérico para qualquer tamanho de cômodos e para qualquer quantidade deles, a informação da quantidade de cômodos da casa será informada pelo usuário, que após esta informação solicita 
//para cada cômodo seu tamanho (comprimento e largura) para possibilitar o cálculo da área e assim através das informações das dimensões da cerâmica escolhida possibilitar saber quantos metros 
//e quantas peças necessitará comprar para poder finalizar o piso. Para cada cômodo informe o valor em cerâmica gasto. Desenvolva um programa em C para uma empreiteira que visa 
//comprar piso cerâmico para uma residência composta por  cômodos informados pelo usuário. O programa deve solicitar as dimensões de comprimento e largura de cada cômodo e calcular 
//a quantidade total de peças de cerâmica necessárias para cobrir todos os pisos. No final do programa informe a quantidade total de área da residência, 
//a quantidade de peças de cerâmica a ser comprada e o preço total que foi gasto para o revestimento.
//OBS: Faça as consistências necessárias para os dados de entrada. Não use Vetores.
#include <stdio.h>

int main() {
    int comodo = 0;
    float largura = 0, comprimento = 0, areaTotalComodo = 0, areaComodo = 0, custoComodo = 0, custoTotalComodo = 0;
    float areaCeramica = 0, valorCeramica = 0, larguraCeramica = 0, comprimentoCeramica = 0;
    int pecasNecessarias = 0, totalPecas = 0;

    printf("Quantos cômodos a residência possui? ");
    scanf("%d", &comodo);
    while (comodo <= 0) {
        printf("Você digitou errado!\n");
        printf("Quantos cômodos a residência possui? ");
        scanf("%d", &comodo);
    }

    printf("Qual a largura da cerâmica? ");
    scanf("%f", &larguraCeramica);
    while (larguraCeramica <= 0) {
        printf("Digite novamente.\n");
        printf("Qual a largura da cerâmica? ");
        scanf("%f", &larguraCeramica);
    }

    printf("Qual o comprimento da cerâmica? ");
    scanf("%f", &comprimentoCeramica);
    while (comprimentoCeramica <= 0) {
        printf("Digite novamente.\n");
        printf("Qual o comprimento da cerâmica? ");
        scanf("%f", &comprimentoCeramica);
    }

    printf("Qual o valor de cada cerâmica? ");
    scanf("%f", &valorCeramica);
    while (valorCeramica <= 0) {
        printf("Digite novamente.\n");
        printf("Qual o valor de cada cerâmica? ");
        scanf("%f", &valorCeramica);
    }

    areaCeramica = larguraCeramica * comprimentoCeramica;

    for (int i = 0; i < comodo; i++) {
        printf("Qual a largura do cômodo %d? ", i + 1);
        scanf("%f", &largura);
        while (largura <= 0) {
            printf("Largura inválida. Digite novamente!\n");
            printf("Qual a largura do cômodo %d? ", i + 1);
            scanf("%f", &largura);
        }

        printf("Qual o comprimento do cômodo %d? ", i + 1);
        scanf("%f", &comprimento);
        while (comprimento <= 0) {
            printf("Comprimento inválido. Digite novamente!\n");
            printf("Qual o comprimento do cômodo %d? ", i + 1);
            scanf("%f", &comprimento);
        }

        areaComodo = largura * comprimento;
        areaTotalComodo += areaComodo;

        pecasNecessarias = (int)(areaComodo / areaCeramica);
        if (areaComodo > pecasNecessarias * areaCeramica) {
            pecasNecessarias += 1;
        }

        totalPecas += pecasNecessarias;
        custoComodo = pecasNecessarias * valorCeramica;
        custoTotalComodo += custoComodo;

        printf("Para o cômodo %d, a área é: %.2f metros quadrados, serão necessárias %d peças de cerâmica\n e o custo será: R$ %.2f\n", i + 1, areaComodo, pecasNecessarias, custoComodo);
    }

    printf("A área total da residência é: %.2f metros quadrados\n", areaTotalComodo);
    printf("O total de peças de cerâmica necessárias é: %d\n", totalPecas);
    printf("O custo total das cerâmicas é: R$ %.2f\n", custoTotalComodo);
}
