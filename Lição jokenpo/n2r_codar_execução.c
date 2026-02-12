#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolherJogador, escolhaComputador;
    srand(time(0));

    printf("*** Jogo jokenpô ***\n");
    printf("Escolha uma opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolherJogador);

    escolhaComputador = rand() %3 + 1;

    switch (escolherJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    
    default:
        printf("Opção invalida!");
        break;
    }
    
    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

        if (escolhaComputador == escolherJogador)
        {
            printf("### Jogo empatou! ###\n");
        } else if ((escolherJogador == 1) && (escolhaComputador == 3) || 
        (escolherJogador == 2) && (escolhaComputador == 1) || 
        (escolherJogador == 3) && (escolhaComputador == 2))
        {
            printf("### Parabéns, você ganhou!\n");
        } else {
            printf("### Você perdeu! ###\n");;
        }
        
        
    return 0;
}