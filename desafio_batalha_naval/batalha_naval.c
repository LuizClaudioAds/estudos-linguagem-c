#include <stdio.h>

int main() {

    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    /* Inicialização do tabuleiro 10x10*/
    int tabuleiro[10][10] = {0}; // 0 representa água
    
    /* Vetores que representam os navios (tamanho fixo = 3) */
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3]   = {3, 3, 3};

    /* Coordenadas iniciais dos navios */
    int linha_h = 2, coluna_h = 3;  // navio horizontal
    int linha_v = 6, coluna_v = 5;  // navio vertical
    
    int valido = 1; // Flag para verificar se a posição é válida

    /* Verifica se o navio horizontal está dentro dos limites */
    if (coluna_h + 2 >= 10 || linha_h >= 10 || linha_h < 0 || coluna_h < 0) {
        printf("Posição inválida para o navio horizontal.\n");
        valido = 0;
    }

    /* Verifica se o navio vertical está dentro dos limites */
    if (linha_v + 2 >= 10 || linha_v < 0 || coluna_v < 0 || coluna_v >= 10) {
        printf("Posição inválida para o navio vertical.\n");
        valido = 0;
    }

    /* Verifica se os navios se sobrepõem */
    for (int i = 0; i < 3; i++) {
        // Verifica sobreposição do navio horizontal com o vertical
        if (linha_h == linha_v + i && coluna_h <= coluna_v && coluna_h + 2 >= coluna_v) {
            printf("Os navios se sobrepõem!\n");
            valido = 0;
            break;
        }
        // Verifica sobreposição do navio vertical com o horizontal
        if (coluna_v == coluna_h + i && linha_v <= linha_h && linha_v + 2 >= linha_h) {
            printf("Os navios se sobrepõem!\n");
            valido = 0;
            break;
        }
    }

    /* Se as posições forem válidas, coloca os navios no tabuleiro */
    if(valido) {
        // Navio horizontal
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
        }
        // Navio vertical
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
        }
    }

    printf("### Bem-vindo ao Jogo de Batalha Naval! ###\n");

    // Visualização do tabuleiro após a colocação dos navios
    if(valido) {
        printf("\nTabuleiro com Navios:\n");
        for (int i = 0; i < 10; i++) {
            if (i == 0) printf("\n\t");
            printf("%c ", colunas[i]);
        }
        printf("\n\n");
        for (int i = 0; i < 10; i++) {
            printf("%d\t", i + 1);
            for (int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Não foi possível posicionar os navios devido a erros.\n");
    }

    printf("\n### Fim do Jogo de Batalha Naval ###\n\n");

    return 0;
}