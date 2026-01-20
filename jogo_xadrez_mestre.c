#include <stdio.h>

/* Jogo de Xadrez */
/* Implementação do jogo de xadrez em C */

/*
Loops Complexos para o Cavalo:
Aprimore a movimentação do Cavalo, utilizando loops aninhados com múltiplas variáveis e/ou condições.
Você pode usar continue e break para controlar o fluxo do loop de forma mais precisa.
O movimento do Cavalo agora será para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
*/

// Funções recursivas para movimentação das peças  
void movimentarTorre(int movimentos) {
    if (movimentos <= 0) return;
    printf("→ Direita\n");
    movimentarTorre(movimentos - 1);
}

void movimentarBispo(int movimentos) {
    if (movimentos <= 0) return;
    // Movimento vertical
    for (int i = 0; i < 1; i++) {
        printf("↑ Cima\n");
        // Movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("→ Direita\n");
        }
    }
    movimentarBispo(movimentos - 1);
}

void movimentarRainha(int movimentos) {
    if (movimentos <= 0) return;
    printf("← Esquerda\n");
    movimentarRainha(movimentos - 1);
}

int main() {
    // Definindo variáveis e estruturas necessárias para o jogo
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8; 

    printf("### Bem-vindo ao Jogo de Xadrez! ###\n");

    // Movimento da Torre: 5 casas para a direita.
    printf("\nMovimento da Torre:\n");
    movimentarTorre(movimentosTorre);

    // Movimento do Bispo: 5 casas na diagonal direita.
    printf("\nMovimento do Bispo:\n");
    movimentarBispo(movimentosBispo);

    // Movimento da Rainha: 8 casas para a esquerda.
    printf("\nMovimento da Rainha:\n");
    movimentarRainha(movimentosRainha);

    // Movimento do Cavalo: 2 casas para cima e 1 casa para a direita.
    printf("\nMovimento do Cavalo:\n");
    for (int vertical = 0; vertical < 3; vertical++) {
        int horizontal = 0;
        while (horizontal < 1) {
            if (vertical < 2) {
                printf("Cima\n");
                break;
            }
            if (vertical == 2) {
                printf("Direita\n");
                horizontal++;
            }
        }
    }

    printf("\n### Fim do Jogo de Xadrez ###\n\n");

    return 0;
}