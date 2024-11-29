/*Observe o trecho de código abaixo, escrito na linguagem C.


Com base nesse código, é correto afirmar que as variáveis a e b.




a.
indicam, quando precedidas pelo caracter &, que os parâmetros podem ser modificados pelas funções scanf() e quadrado().


b.
não podem ser modificadas pela função quadrado(), porque a passagem de parâmetros é por valor.


c.
são utilizadas como passagem de parâmetros por resultado na função printf().



d.
podem ser modificadas pela função printf(), porque a passagem de parâmetros é por referência.


e.
são parâmetros formais na chamada da função quadrado() dentro da função main().*/
#include <stdio.h>

// Função que recebe um ponteiro para um inteiro e modifica o valor original
void quadrado(int *num) {
    *num = (*num) * (*num);
}

int main() {
    int a;

    // Solicita ao usuário que insira um valor para 'a'
    printf("Digite um número: ");
    scanf("%d", &a); // Passa o endereço de 'a' para scanf, para que ele possa modificar 'a'

    // Exibe o valor original de 'a'
    printf("Valor original de a: %d\n", a);

    // Passa o endereço de 'a' para a função quadrado, para que ela possa modificar o valor de 'a'
    quadrado(&a);

    // Exibe o valor de 'a' após o cálculo do quadrado
    printf("Valor de a ao quadrado: %d\n", a);

    return 0;
}
