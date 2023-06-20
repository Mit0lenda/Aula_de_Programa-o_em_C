#include <stdio.h>
void desenho(int mat[6][7], int jogad)
{
    int c, l;
    printf("\n*************");       // essa funcao ela vai imprimir a matriz e deixar ela bonita.
    printf("\nJogadas:%d\n", jogad); // mostra quantas jogadas ainda se tem
    for (l = 0; l < 6; l++)
    {
        printf("\n\n");
        for (c = 0; c < 7; c++) // ela no comeco 0 mas depois vai mudando atraves das jogas e imprimindo 1 e 2 aonde os jogadores colocaram
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
    for (l = 0; l < 6; l++) // essa funcao determina quem vai ganhar e quando.Se retorna 1 o primeiro ganhou e se retorna 2 o segundo ganhou.
    {
        for (c = 0; c < 4; c++) // se vai ganhar pela vertical.
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
        for (c = 0; c < 7; c++) // se vai ganhar pela horizontal.
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
        for (c = 0; c < 6; c++) // se ira ganhar pelo quadrado.
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
        for (c = 0; c < 4; c++) // se ira ganhar por diagonal.
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
        for (c = 6; c >= 0; c--) // se ira ganhar por diagonal mas decrementando para pegar do outro lado.
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
    while (jog == 0) // Determina se havera um novo jogo se ouver ele fica como 0 se nao ira para 1 terminara com o jogo.
    {
        jogadas = 42;           // num maximo de jogadas,determina  o empate quando zera;
        for (l = 0; l < 6; l++) // coloca o zero na matriz para imprimir tudo zero em um jogo novo;
        {
            for (coluna = 0; coluna < 7; coluna++)
            {
                matriz[l][coluna] = 0;
            }
        }
        printf("O Primeiro jogador sera 1 e o Segundo sera 2");
        win1 = 0; // aqui declaramos como para resetar pro 0 e repetir o jogo.
        while (win1 == 0)
        {
            win1 = vitoria(matriz);
            if (win1 == 0) // Enquanto win1 for 0 ele continua aqui ate alguem ganhar ou empatar.
            {
                desenho(matriz, jogadas);
                printf("\n\nPrimeiro jogador de 0 a 6 escolha em qual coluna quer quer colocar:"); // Primeiro jogador escolhe a coluna.
                scanf("%d", &coluna);
                jogadas--;
                while (coluna < 0 || coluna > 6 || matriz[0][coluna] != 0) // verifica.
                {
                    if (matriz[0][coluna] != 0) // verifica se tem espaco.
                    {
                        printf("\nColuna esta cheia!");
                    }
                    printf("\n\nPrimeiro jogador de 0 a 6 escolha em qual coluna quer quer colocar:");
                    scanf("%d", &coluna);
                }
                for (l = 5; l >= 0; l--) // imprimi de baixo para cima.
                {
                    if (matriz[l][coluna] == 0)
                    {
                        matriz[l][coluna] = 1;
                        l = -1;
                    }
                }
            }
            win1 = vitoria(matriz);
            if (jogadas == 0) // aqui determina se tera empate
            {
                win1 = 3;
            }
            if (win1 == 0) // loop ate alguem ganhar ou empatar.
            {
                desenho(matriz, jogadas);
                printf("\n\nSegundo jogador de 0 a 6 escolha em qual coluna quer quer colocar:"); // Segundo jogador escolhe a coluna.
                scanf("%d", &coluna);
                jogadas--;
                while (coluna < 0 || coluna > 6 || matriz[0][coluna] != 0) // verifica.
                {
                    if (matriz[0][coluna] != 0) // verifica se tem espaco.
                    {
                        printf("\nColuna esta cheia!");
                    }
                    printf("\n\nSegundo jogador de 0 a 6 escolha em qual coluna quer quer colocar:");
                    scanf("%d", &coluna);
                }
                for (l = 5; l >= 0; l--) // imprimi de baixo para cima.
                {
                    if (matriz[l][coluna] == 0)
                    {
                        matriz[l][coluna] = 2;
                        l = -1;
                    }
                }
            }
            if (jogadas == 0) // Aqui vai para msg de empate.
            {
                win1 = 3;
            }
        }
        desenho(matriz, jogadas); // funcao desenho aplicada aqui para imprimir a matriz e imprimi jogadas.
        if (win1 == 1)            // Jogador 1 ganhou,mostra o placar e pergunta se quer continuar.
        {
            printf("\nParabens voce ganhou Jogador 1\a\n");
            j1++;
            printf("\n\nPrimeiro jogador ganhou %d e o Segundo jogador ganhou %d\n\n", j1, j2);
            printf("Digite 0 se quiser continuar a jogar e 1 para parar");
            scanf("%d", &jog);
        }
        if (win1 == 2) // Jogador 2 ganhou,mostra o placar e pergunta se quer continuar.
        {
            printf("\nParabens voce ganhou Jogador 2\a\n");
            j2++;
            printf("\n\nPrimeiro jogador ganhou %d e o Segundo jogador ganhou %d\n\n", j1, j2);
            printf("Digite 0 se quiser continuar a jogar e 1 para parar");
            scanf("%d", &jog);
        }
        if (win1 == 3) // Empatou,mostra o placar e pergunta se quer continuar.
        {
            printf("\nParabens voce Empatou\a\n");
            printf("\n\nPrimeiro jogador ganhou %d e o Segundo jogador ganhou %d\n\n", j1, j2);
            printf("Digite 0 se quiser continuar a jogar e 1 para parar");
            scanf("%d", &jog);
        }
    }
}