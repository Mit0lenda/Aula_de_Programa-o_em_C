//Faça um programa para contabilizar os votos de uma eleição para síndico de condomínios. 
//O programa deve funcionar para um número não determinado de eleitores, pois cada condomínio que utilizar o sistema poderá ter quantidades 
 //diferentes moradores, e consequentemente de  votantes. Cada eleição pode ter 3 candidatos. 
//O sistema deve mostrar as seguintes opções em um menu que será mostrado para cada votante:
//1- Votar no  candidato 1
//2 - Votar no Candidato 2
//3 - Votar no Candidato 3
//2 - Votar em Branco
//3 - Anular Voto
//Cada pessoa poderá votar apenas em uma das opções. A votação irá terminar quando o votante informar o número do apartamento ou caso = zero. 
//Ao finalizar a votação deve ser apresentado a quantidade de votantes, o candidato vencedor e a quantidade de votos que recebeu, a quantidade de votos brancos e nulos, o percentual de votos brancos e o candidato que teve o menor número de votos.
 //OBS: Realize as consistências de dados necessárias e não modifique a especificação do programa. Não Use vetores.
#include <stdio.h>

int main() {
    int voto,votosCandidato1 = 0, votosCandidato2 = 0, votosCandidato3 = 0,votosBrancos = 0, votosNulos = 0, totalVotantes = 0;
    int numeroApartamento,maxVotos, candidatoVencedor,minVotos, candidatoMenosVotos,percentualBrancos;
    int continuar = 1; 

    while (continuar > 0) {
        printf("Informe o numero do apartamento ou 0 para encerrar: ");
        scanf("%d", &numeroApartamento);
        
        if (numeroApartamento == 0) {
            continuar = 0;
        } else {
            printf("\nMenu de Votação:\n");
            printf("1) Votar no Candidato 1\n");
            printf("2) Votar no Candidato 2\n");
            printf("3) Votar no Candidato 3\n");
            printf("4) Votar em Branco\n");
            printf("5) Anular Voto\n");
            printf("Escolha sua opção: ");
            scanf("%d", &voto);
            
            totalVotantes++;
            
            switch (voto) {
                case 1:
                    votosCandidato1++;
                    break;
                case 2:
                    votosCandidato2++;
                    break;
                case 3:
                    votosCandidato3++;
                    break;
                case 4:
                    votosBrancos++;
                    break;
                case 5:
                    votosNulos++;
                    break;
                default:
                    printf("Opcao Invalida, voto não computado.\n");
                    totalVotantes--;
                    break;
            }
        }
    }

    printf("\nTotal de votantes: %d\n", totalVotantes);

    maxVotos = votosCandidato1;
    candidatoVencedor = 1;
    if (votosCandidato2 > maxVotos) {
        maxVotos = votosCandidato2;
        candidatoVencedor = 2;
    }
    if (votosCandidato3 > maxVotos) {
        maxVotos = votosCandidato3;
        candidatoVencedor = 3;
    }

    minVotos = votosCandidato1;
    candidatoMenosVotos = 1;
    if (votosCandidato2 < minVotos) {
        minVotos = votosCandidato2;
        candidatoMenosVotos = 2;
    }
    if (votosCandidato3 < minVotos) {
        minVotos = votosCandidato3;
        candidatoMenosVotos = 3;
    }
    
    percentualBrancos = (votosBrancos * 100) / totalVotantes;

    printf("Candidato vencedor: Candidato %d com %d votos\n", candidatoVencedor, maxVotos);
    printf("Quantidade de votos em branco: %d\n", votosBrancos);
    printf("Quantidade de votos nulos: %d\n", votosNulos);
    printf("Percentual de votos brancos: %d %\n",percentualBrancos);
    printf("Candidato com menor numero de votos: Candidato %d com %d votos\n", candidatoMenosVotos, minVotos);
}
