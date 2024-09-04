//Desenvolva um programa para cálculo do salário família de um funcionário de uma empresa. 
//O programa deve solicitar o salário bruto do funcionário e o total de dependentes. 
//O salário líquido do funcionário será o salário bruto acrescido de 2% sobre cada dependente que o funcionário tiver. 
//Para funcionário com mais de 5 dependentes o cálculo deve ser feito considerando apenas 5 dependentes 
//e não deve ultrapassar um valor teto do salário-família, que é informado pelo usuário . Para ser dependente e gerar salário família
// o grau de parentesco deve ser filho(a) e ter idade inferior a 14 anos. Tem direito a receber o trabalhador com renda bruta de até um valor informado pelo usuário.
//O salário líquido deve ser calculado e exibido imediatamente após o usuário informar os dados de um funcionário.
//As consistências adequadas para a entrada de dados devem ser realizadas.
#include <stdio.h>

int main() {
    int dependentes = 0, qtdDependentes = 0, idade = 0, dependentesValidos = 0, dependentesConsiderados;
    float salarioBruto = 0, salarioLiquido = 0, salarioFamilia = 0, salarioBrutoPermitido = 0;
    float valorDependentes = 0;
    int direito = 1;

    printf("Qual o salario bruto maximo permitido para ter salario familia? R$");
    scanf("%f", &salarioBrutoPermitido);
    while (salarioBrutoPermitido <= 0) {
        printf("Valor invalido!\n");
        printf("Qual o salario bruto maximo permitido para ter salario familia? R$");
        scanf("%f", &salarioBrutoPermitido);
    }

    printf("Qual o teto do salario familia? R$");
    scanf("%f", &salarioFamilia);
    while (salarioFamilia <= 0) {
        printf("Valor Invalido!\n");
        printf("Qual o teto do salario familia? R$");
        scanf("%f", &salarioFamilia);
    }

    while (direito > 0) {
        printf("Qual o salario bruto do funcionario? R$");
        scanf("%f", &salarioBruto);
        while (salarioBruto <= 0) {
            printf("Valor invalido!\n");
            printf("Qual o salario bruto do funcionario? R$");
            scanf("%f", &salarioBruto);
        }

        if (salarioBruto > salarioBrutoPermitido) {
            printf("Funcionario não tem direito ao salario familia pois sua renda é superior ao valor máximo permitido\n");
            direito = 0;
        } else {
            printf("O Funcionario tem direito ao salario familia.\n");

            printf("Informe o total de dependentes: ");
            scanf("%d", &dependentes);
            while (dependentes < 0) {
                printf("Numero Invalido!\n");
                printf("Informe o total de dependentes: ");
                scanf("%d", &dependentes);
            }

            for (int i = 0; i < dependentes; i++) {
                printf("Informe o grau de parentesco (1 para filho ou filha, 2 para outro): ");
                scanf("%d", &qtdDependentes);
                while (qtdDependentes <= 0 || qtdDependentes >= 3) {
                    printf("Numero Invalido!\n");
                    printf("Informe o grau de parentesco (1 para filho ou filha, 2 para outro): ");
                    scanf("%d", &qtdDependentes);
                }

                if (qtdDependentes == 1) {
                    printf("Qual a idade do seu filho ou filha: ");
                    scanf("%d", &idade);
                    while (idade < 0) {
                        printf("Idade Invalida!\n");
                        printf("Qual a idade do seu filho ou filha: ");
                        scanf("%d", &idade);
                    }
                    if (idade < 14) {
                        dependentesValidos++;
                    }
                } else {
                    printf("Dependente não entra na se não for filho.\n");
                }
            }

            if (dependentesValidos > 5) {
                dependentesConsiderados = 5;
            } else {
                dependentesConsiderados = dependentesValidos;
            }

            valorDependentes = salarioBruto * 0.02 * dependentesConsiderados;
            salarioLiquido = salarioBruto + valorDependentes;

            if (salarioLiquido > salarioFamilia) {
                salarioLiquido = salarioFamilia;
            }
            printf("O salario liquido do funcionario é: R$%.2f\n", salarioLiquido);
            direito = 0;
        }
    }

}
