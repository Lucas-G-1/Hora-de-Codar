#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int numeroJogador , numeroComputador, resultado;
    char tipoComparacao;

    // Gerar numero aleatorio
    srand(time(0));
    numeroComputador = rand() % 100 + 1; //numero entre 1 e 100

    //Iniciar Jogo
    printf("Bem-Vindo ao jogo maior, menor ou igual!\n");
    printf("Você deve escolher um numero e o tipo de comparação.\n");
    printf("M. Maior!\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolher a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("Digite seu numero (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    //Exibir numero do computador
    //printf("O numero do computador é: %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
         printf("Você escolheu a opção menor!\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
         printf("Você escolheu a opção igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    
    default:
        printf("Opção de jogo invalida\n");
        break;
    }

    //Exibir numero do computador
    printf("O numero do computador é: %d e o do Jogador é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
        printf("Você venceu!\n");
    } else {
        printf("Você perdeu!\n");
    }
    
}