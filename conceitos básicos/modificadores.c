#include<stdio.h>

int main (){

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueminimoB = 2500;

    int resultadoA, resultadoB;

    double valorTotalA;
    double valorTotalB;

    printf("\n\nO produto %s tem estoque: %d, e o  valor unitário é: %.2f\n", produtoA, estoqueA, valorA);
    printf("O produto %s tem estoque: %d, e o  valor unitário é: %.2f\n\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueminimoB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n\n", produtoB, resultadoB);

    valorTotalA = estoqueA * valorA;
    valorTotalB = estoqueB * valorB;

    printf("O valor total de A (R$: %.2f) é maior que o valor total de B (R$: %.2f): %d\n", valorTotalA, valorTotalB, (valorTotalA > valorTotalB));
    printf("O valor total de B (R$: %.2f) é maior que o valor total de A (R$: %.2f): %d\n", valorTotalB, valorTotalA, (valorTotalB > valorTotalA));

}