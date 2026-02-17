#include<stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //idoso > 60
    //adulto 18 <= x < 60
    //adolecente 12 <= x < 18
    //criança < 12

    if (idade >= 60){
        printf("Você é um idoso!\n");
    } else if (idade >= 18 && idade < 60){
        printf("Você é um adulto!\n");
    } else if (idade >= 12 && idade < 18){
        printf ("Você é um adolecente!\n");
    } else {
        printf("Você é uma criança!\n");
    }
}