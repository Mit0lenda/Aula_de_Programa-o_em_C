#include <stdio.h>
void desenho(int mat[6][7], int jogad)
{
    int c, l;
    printf("\n*********************************");
    printf("\nJogadas:%d\n", jogad);
    for (l = 0; l < 6; l++)
    {
        printf("\n\n");
        for (c = 0; c < 7; c++)
        {
            if (c == 0)
            {
                printf("| %d |", mat[l][c]);
            }
            else
            {
                printf(" %d |", mat[l][c]);
            }
        }
    }
}
int vitoria(int mat[6][7])
{
    int c = 0, l = 0, j = 0;
    for (l = 0; l < 6; l++)
    {
        for (c = 0; c < 4; c++)
        {
            if (mat[l][c] == 1 && mat[l][c + 1] == 1 && mat[l][c + 2] == 1 && mat[l][c + 3] == 1)
            {
                return 1;
            }
            if (mat[l][c] == 2 && mat[l][c + 1] == 2 && mat[l][c + 2] == 2 && mat[l][c + 3] == 2)
            {
                return 2;
            }
        }
    }
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 7; c++)
        {
            if (mat[l][c] == 1 && mat[l + 1][c] == 1 && mat[l + 2][c] == 1 && mat[l + 3][c] == 1)
            {
                return 1;
            }
            if (mat[l][c] == 2 && mat[l + 1][c] == 2 && mat[l + 2][c] == 2 && mat[l + 3][c] == 2)
            {
                return 2;
            }
        }
    }
    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 6; c++)
        {
            if (mat[l][c] == 1 && mat[l + 1][c] == 1 && mat[l][c + 1] == 1 && mat[l + 1][c + 1] == 1)
            {
                return 1;
            }
            if (mat[l][c] == 2 && mat[l + 1][c] == 2 && mat[l][c + 1] == 2 && mat[l + 1][c + 1] == 2)
            {
                return 2;
            }
        }
    }
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 4; c++)
        {
            if (mat[l][c] == 1 && mat[l + 1][c + 1] == 1 && mat[l + 2][c + 2] == 1 && mat[l + 3][c + 3] == 1)
            {
                return 1;
            }
            if (mat[l][c] == 2 && mat[l + 1][c + 1] == 2 && mat[l + 2][c + 2] == 2 && mat[l + 3][c + 3] == 2)
            {
                return 2;
            }
        }
    }
    for (l = 0; l < 3; l++)
    {
        for (c = 6; c >= 0; c--)
        {
            if (mat[l][c] == 1 && mat[l + 1][c - 1] == 1 && mat[l + 2][c - 2] == 1 && mat[l + 3][c - 3] == 1)
            {
                return 1;
            }
            if (mat[l][c] == 2 && mat[l + 1][c - 1] == 2 && mat[l + 2][c - 2] == 2 && mat[l + 3][c - 3] == 2)
            {
                return 2;
            }
        }
    }

    return 0;
}
int main()
{
    int matriz[6][7], coluna = 0, win1 = 0, l = 0, jog = 0, j1 = 0, j2 = 0, jogadas;
    while (jog == 0)
    {
        jogadas = 42;
        for (l = 0; l < 6; l++)
        {
            for (coluna = 0; coluna < 7; coluna++)
            {
                matriz[l][coluna] = 0;
            }
        }
        printf("O Primeiro jogador sera 1 e o Segundo sera 2");
        win1 = 0;
        while (win1 == 0)
        {
            win1 = vitoria(matriz);
            if (win1 == 0)
            {
                desenho(matriz, jogadas);
                printf("\n\nPrimeiro jogador de 0 a 6 escolha em qual coluna quer quer colocar:");
                scanf("%d", &coluna);
                jogadas--;
                while (coluna < 0 || coluna > 6 || matriz[0][coluna] != 0)
                {
                    if (matriz[0][coluna] != 0)
                    {
                        printf("\nColuna esta cheia!");
                    }
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
            }
            win1 = vitoria(matriz);
            if (win1 == 0)
            {
                desenho(matriz, jogadas);
                printf("\n\nSegundo jogador de 0 a 6 escolha em qual coluna quer quer colocar:");
                scanf("%d", &coluna);
                jogadas--;
                while (coluna < 0 || coluna > 6 || matriz[0][coluna] != 0)
                {
                    if (matriz[0][coluna] != 0)
                    {
                        printf("\nColuna esta cheia!");
                    }
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
            }
            if (jogadas == 0)
            {
                printf("\nEmpatou!!");
                jog = 0;
                win1 = 0;
            }
        }
        desenho(matriz, jogadas);
        if (win1 == 1)
        {
            printf("\nParabens voce ganhou Jogador 1\a\n");
            printf("Digite 0 se quiser continuar a jogar e 1 para parar");
            scanf("%d", &jog);
            j1++;
        }
        if (win1 == 2)
        {
            printf("\nParabens voce ganhou Jogador 2\a\n");
            printf("Digite 0 se quiser continuar a jogar e 1 para parar");
            scanf("%d", &jog);
            j2++;
        }
    }
    return 0;
}