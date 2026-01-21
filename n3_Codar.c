#include <stdio.h>

int main(){
    //Declarar variaveis, u i estoque, double valor unitario, double valor local e u i valor minima
    char produtoA [30] = "Produto A";
    char produtoB [30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int EstoqueMinimoA = 500;
    unsigned int EstoqueMinimoB = 2500;

    double valorTotalB;
    double valorTotalA;

    int resultadoA, resultadoB;

    // exibir as informações totais dos produtos
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n\n", produtoB, estoqueB, valorB);

    //Comparação de valor minimo
    resultadoA = estoqueA > EstoqueMinimoA;
    resultadoB = estoqueB > EstoqueMinimoB;

    printf("O produto %s tem estoque minimo %d\n",produtoA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n\n",produtoB, resultadoB);

    //Coparações de valores totais dos prodotos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B(R$ %.2f)? %d\n", estoqueA * valorA, estoqueB * valorB,(estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}