#include <stdio.h>

int main(){
    /* Declarar variáveis */
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinA = 500;
    unsigned int estoqueMinB = 2500;

    double valorTotalA;
    double ValorTotalB;

    int resultadoA, resultadoB;

    /* Exibir informações dos produtos */
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

    /* Comparações com o valor mínimo de estoque */
    resultadoA = estoqueA > estoqueMinA;
    resultadoB = estoqueB > estoqueMinB;

    printf("\nO produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n\n", produtoB, resultadoB);

    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", 
        estoqueA * valorA,
        estoqueB * valorB,
        (estoqueA * valorA) > (estoqueB * valorB));

}