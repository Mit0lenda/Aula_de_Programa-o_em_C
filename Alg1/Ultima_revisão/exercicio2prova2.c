#include <stdio.h>
int main()
{
    int vetor_sim[6], vetor_nao[6], cont = 0, idade = 15, fuma = 0, v = 0;
    while (idade >= 15)
    {
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        if (idade>=15)
        {
            printf("voce fuma ?1=sim 2=nao");
            scanf("%d", &fuma);
            if (fuma == 1)
            {
                if (idade >= 15 && idade <= 17)
                {
                    vetor_sim[0] += 1;
                }
                else
                {
                    if (idade >= 18 && idade <= 25)
                    {
                        vetor_sim[1] += 1;
                    }
                    else
                    {
                        if (idade >= 26 && idade <= 30)
                        {
                            vetor_sim[2] += 1;
                        }
                        else
                        {
                            if (idade >= 31 && idade <= 50)
                            {
                                vetor_sim[3] += 1;
                            }
                            else
                            {
                                if (idade >= 51 && idade <= 70)
                                {
                                    vetor_sim[4] += 1;
                                }
                                else
                                {
                                    if (idade >= 70)
                                    {
                                        vetor_sim[5] += 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                if (idade >= 15 && idade <= 17)
                {
                    vetor_nao[0] += 1;
                }
                else
                {
                    if (idade >= 18 && idade <= 25)
                    {
                        vetor_nao[1] += 1;
                    }
                    else
                    {
                        if (idade >= 26 && idade <= 30)
                        {
                            vetor_nao[2] += 1;
                        }
                        else
                        {
                            if (idade >= 31 && idade <= 50)
                            {
                                vetor_nao[3] += 1;
                            }
                            else
                            {
                                if (idade >= 51 && idade <= 70)
                                {
                                    vetor_nao[4] += 1;
                                }
                                else
                                {
                                    if (idade >= 70)
                                    {
                                        vetor_nao[5] += 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vetor_sim[0] != 0)
    {
        printf("sim tem a quantidade:%d\n", vetor_sim[0]);
    }
    else
    {
        printf("nao tem\n");
    }
    for (v = 0; v < 6; v++)
    {
        if (vetor_nao[v] <= vetor_sim[v])
        {
            printf("menor: %d\n", v + 1);
        }
        else
        {
            printf("todas sao;");
        }
        printf("fumantes da faixa %d quant:%d\n", v, vetor_sim[v]);
        printf("fumantes da faixa %d quant:%d\n", v, vetor_nao[v]);
    }
}