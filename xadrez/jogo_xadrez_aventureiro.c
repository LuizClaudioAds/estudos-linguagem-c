#include <stdio.h>

/* Jogo de Xadrez */
/* Implementação do jogo de xadrez em C */

int main() {
    // Definindo variáveis e estruturas necessárias para o jogo
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8; 
    const int cavaloBaixo = 2;
    const int cavaloEsquerda = 1;

    int contador;

    printf("### Bem-vindo ao Jogo de Xadrez! ###\n");

    // Movimento da Torre: 5 casas para a direita.
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("→ Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal direita.
    printf("\nMovimento do Bispo:\n");
    contador = 1;
    while (contador <= movimentosBispo) {
        printf("↑ Cima\n");
        printf("→ Direita\n");
        contador++;
    }

    // Movimento da Rainha: 8 casas para a esquerda.
    contador = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("← Esquerda\n");
        contador++; 
    } while (contador < movimentosRainha);

    // Movimento do Cavalo: 1 movimento em "L" (2 casas para baixo e 1 para a esquerda).
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < cavaloEsquerda; i++) {
        int j = 0;
        while (j < cavaloBaixo) {
            printf("↓ Baixo\n");
            j++;
        }
        printf("← Esquerda\n");
    }

    printf("\n### Fim do Jogo de Xadrez ###\n\n");

    return 0;
}