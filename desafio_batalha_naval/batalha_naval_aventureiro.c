#include <stdio.h>

#define TAMANHO_TABULEIRO 10

int main() {
    // Inicializa um tabuleiro 10x10 com água (0)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    int navioA[3] = {3, 3, 3}; // Navio A (horizontal)
    int navioB[3] = {3, 3, 3}; // Navio B (vertical)
    int navioC[3] = {3, 3, 3}; // Navio C (diagonal)
    int navioD[3] = {3, 3, 3}; // Navio D (diagonal invertido)
    
    // Coordenadas iniciais dos navios
    int linhaA = 0, colunaA = 0; // Navio A (horizontal)
    int linhaB = 2, colunaB = 0; // Navio B (vertical)
    int linhaC = 7, colunaC = 1; // Navio C (diagonal)
    int linhaD = 7, colunaD = 6; // Navio D (diagonal invertido)

    int valido = 1; // Flag para verificar se as posições são válidas

    // Verifica se o navio A (horizontal) está dentro dos limites
    if (colunaA + 2 >= TAMANHO_TABULEIRO || linhaA >= TAMANHO_TABULEIRO) {
        valido = 0;
    }

    // Verifica se o navio B (vertical) está dentro dos limites
    if (colunaB >= TAMANHO_TABULEIRO || linhaB + 2 >= TAMANHO_TABULEIRO) {
        valido = 0;
    }

    // Verifica se o navio C (diagonal) está dentro dos limites
    if (colunaC + 2 >= TAMANHO_TABULEIRO || linhaC + 2 >= TAMANHO_TABULEIRO) {
        valido = 0;
    }

    // Verifica se o navio D (diagonal invertido) está dentro dos limites
    if (colunaD - 2 < 0 || linhaD + 2 >= TAMANHO_TABULEIRO) {
        valido = 0;
    }

    if (!valido) {
        printf("Posições inválidas para os navios.\n");
        return 0;
    }

    // Coloca o navio A (horizontal) no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaA][colunaA + i] = navioA[i];
    }
    // Coloca o navio B (vertical) no tabuleiro
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaB + i][colunaB] != 0) {
            valido = 0;
            printf("Os navios se sobrepõem ao colocar o navio B!\n");
            break;
        }
        tabuleiro[linhaB + i][colunaB] = navioB[i];
    }
    // Coloca o navio C (diagonal) no tabuleiro
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaC + i][colunaC + i] != 0) {
            valido = 0;
            printf("Os navios se sobrepõem ao colocar o navio C!\n");
            break;
        }
        tabuleiro[linhaC + i][colunaC + i] = navioC[i];
    }
    // Coloca o navio D (diagonal invertido) no tabuleiro
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaD + i][colunaD - i] != 0) {
            valido = 0;
            printf("Os navios se sobrepõem ao colocar o navio D!\n");
            break;
        }
        tabuleiro[linhaD + i][colunaD - i] = navioD[i];
    }

    printf("### Bem-vindo ao Jogo de Batalha Naval Aventureiro! ###\n");

    // Visualização do tabuleiro após a colocação dos navios
    if(valido) {
        printf("\n\tTabuleiro com Navios:\n");
        for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
            if (i == 0) printf("\n\t");
            printf("%c ", 'A' + i);
        }
        printf("\n\n");
        for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
            printf("%d\t", i + 1);
            for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Não foi possível posicionar os navios devido a sobreposições ou posições inválidas.\n");
    }

    return 0;
}