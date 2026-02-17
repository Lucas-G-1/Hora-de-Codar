#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media;

    printf("***Programa de Calculo de Méida*** \n");

    printf("Digite sua Primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite sua Segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite sua Terceira nota: \n");
    scanf("%f", &nota3);

    media =(float) (nota1 + nota2 + nota3) /3;

    printf("Sua nota é: %.2f \n", media);

    return 0;
}