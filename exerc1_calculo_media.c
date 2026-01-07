#include <stdio.h>

int main(){

    /* Entrada de Valores */
    float nota1, nota2, nota3, media;

    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a 2ª nota: ");

    scanf("%f", &nota2);

    printf("\nDigite a 3ª nota: ");
    scanf("%f", &nota3);

    /* Cálculos */

    media = (nota1 + nota2 + nota3) / 3;

    /* Apresentação de Valores */

    printf("\nA média das notas é: %.2f\n\n", media);

}