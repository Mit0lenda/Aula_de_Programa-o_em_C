#include <stdio.h>
void desenho(int mat[6][7])
{
    int c, l;
    for (l = 0; l < 6; l++)
    {
        printf("\n");
        for (c = 0; c < 7; c++)
        {
            printf("%d", mat[l][c]);
        }
    }
}
int vitoria(int mat[6][7])
{
    int c, l,j1,j2;
    for (l = 0; l < 6; l++)
    {
        if (mat[l][c] == 1 && mat[l][c + 1] == 1 && mat[l][c + 2] == 1 && mat[l][c + 3] == 1)
        {
            j1 + 1;
            return j1;
        }
        if (mat[l][c] == 2 && mat[l][c + 1] == 2 && mat[l][c + 2] == 2 && mat[l][c + 3] == 2)
        {
            j2 + 1;
            return j2;
        }
        for (c = 0; c < 7; c++)
        {
            if (mat[l][c] == 1 && mat[l + 1][c] == 1 && mat[l + 2][c] == 1 && mat[l + 3][c] == 1)
            {
                j1 + 1;
                return j1;
            }
            if (mat[l][c] == 1 && mat[l + 1][c] == 1 && mat[l + 2][c] == 1 && mat[l + 3][c] == 1)
            {
                j2 + 1;
                return j2;
            }
        }
    }
}
int main()
{
    int matriz[6][7], jog, jog2, coluna, win1, win2, l;
    for (l = 0; l < 6; l++)
    {
        for (coluna = 0; coluna < 7; coluna++)
        {
            matriz[l][coluna] = 0;
        }
    }

    printf("Olá primeiro jogador escolha qual numero tu quer ser representado 1 ou 2 ?\n");
    scanf("%d", &jog);
    while (jog < 1 || jog > 2)
    {
        printf("Olá jogador escolha qual numero tu quer ser representado 1 ou 2 ?\n");
        scanf("%d", &jog);
    }
    if (jog == 1)
    {
        printf("Então o segundo jogador será %d\n", jog2 = 2);
    }
    else
    {
        printf("Então o segundo jogador será %d\n", jog2 = 1);
    }
    desenho(matriz);
    while (win1 == 0)
    {
        printf("\n\nPrimeiro jogador de 0 a 6 escolha em qual coluna quer quer colocar:");
        scanf("%d", &coluna);
        while (coluna < 0 || coluna > 6)
        {
            printf("\n\nPrimeiro jogador de 0 a 6 escolha em qual coluna quer quer colocar:");
            scanf("%d", &coluna);
        }
        for (l = 5; l >= 0; l--)
        {
            if (matriz[l][coluna] == 0)
            {
                matriz[l][coluna] = 1;
                l = -1;
            }
        }
        desenho(matriz);
        vitoria(matriz);

        printf("\n\nSegundo jogador de 0 a 6 escolha em qual coluna quer quer colocar:");
        scanf("%d", &coluna);
        while (coluna < 0 || coluna > 6)
        {
            printf("\n\nSegundo jogador de 0 a 6 escolha em qual coluna quer quer colocar:");
            scanf("%d", &coluna);
        }
        for (l = 5; l >= 0; l--)
        {
            if (matriz[l][coluna] == 0)
            {
                matriz[l][coluna] = 2;
                l = -1;
            }
        }
        desenho(matriz);
        vitoria(matriz, j1, j2);
    }
    return 0;
}
