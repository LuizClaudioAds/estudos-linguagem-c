/*
===============================================
ESTRUTURA DE REPETIÇÃO DO WHILE EM C
===============================================

Este arquivo serve como material de consulta rápida
sobre a estrutura de repetição do while.

Autor: Luiz
Descrição:
- Estrutura básica do do while
- Diferença entre while e do while
- Casos de uso comuns
===============================================
*/

#include <stdio.h>

int main() {

    /*
    ===============================================
    1. ESTRUTURA BÁSICA DO DO WHILE
    ===============================================

    - O do while executa o bloco PELO MENOS UMA VEZ
    - A condição é testada APÓS a execução
    - Útil quando a primeira execução é obrigatória
    */

    int contador = 1;

    do {
        printf("Contador: %d\n", contador);
        contador++;
    } while (contador <= 5);

    printf("\n");

    /*
    ===============================================
    2. DO WHILE COM ENTRADA DO USUÁRIO
    ===============================================

    - Garante que o usuário digite ao menos uma vez
    */

    int numero;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            printf("Voce digitou: %d\n", numero);
        }

    } while (numero != 0);

    printf("\n");

    /*
    ===============================================
    3. COMPARAÇÃO: WHILE x DO WHILE
    ===============================================

    WHILE:
    - Testa antes
    - Pode não executar nenhuma vez

    DO WHILE:
    - Executa ao menos uma vez
    - Testa depois
    */

    /*
    ===============================================
    4. DO WHILE EM MENUS
    ===============================================

    - Muito usado para menus interativos
    */

    int opcao;

    do {
        printf("1 - Executar\n");
        printf("2 - Configuracoes\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Executando...\n");
                break;
            case 2:
                printf("Abrindo configuracoes...\n");
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }

        printf("\n");

    } while (opcao != 0);

    /*
    ===============================================
    5. BOAS PRÁTICAS
    ===============================================

    - Usar quando a primeira execução for obrigatória
    - Garantir que a condição possa se tornar falsa
    - Usar indentação clara
    */

    return 0;
}
