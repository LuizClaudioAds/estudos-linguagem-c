/*
===============================================
ESTRUTURA DE REPETIÇÃO FOR EM C
===============================================

Este arquivo serve como material de consulta rápida
sobre a estrutura de repetição for.

Autor: Luiz
Descrição:
- Estrutura básica do for
- Fluxo de execução
- Casos de uso mais comuns
===============================================
*/

#include <stdio.h>

int main() {

    /*
    ===============================================
    1. ESTRUTURA BÁSICA DO FOR
    ===============================================

    for (inicializacao; condicao; incremento) {
        // bloco de código
    }

    - Inicialização: executada uma única vez
    - Condição: testada antes de cada iteração
    - Incremento: executado ao final de cada volta
    */

    int i;

    for (i = 1; i <= 5; i++) {
        printf("i = %d\n", i);
    }

    printf("\n");

    /*
    ===============================================
    2. FOR COM CONTAGEM DECRESCENTE
    ===============================================
    */

    for (i = 5; i >= 1; i--) {
        printf("Contagem regressiva: %d\n", i);
    }

    printf("\n");

    /*
    ===============================================
    3. FOR COM PASSO DIFERENTE DE 1
    ===============================================
    */

    for (i = 0; i <= 10; i += 2) {
        printf("Numero par: %d\n", i);
    }

    printf("\n");

    /*
    ===============================================
    4. FOR SEM UMA DAS PARTES
    ===============================================

    - Qualquer parte pode ser omitida
    - O ponto e vírgula é obrigatório
    */

    i = 1;
    for ( ; i <= 3; ) {
        printf("i = %d\n", i);
        i++;
    }

    printf("\n");

    /*
    ===============================================
    5. FOR INFINITO
    ===============================================
    */

    /*
    for (;;) {
        // loop infinito
    }
    */

    /*
    ===============================================
    6. FOR ANINHADO
    ===============================================

    - Muito usado com matrizes
    */

    int linha, coluna;

    for (linha = 1; linha <= 3; linha++) {
        for (coluna = 1; coluna <= 3; coluna++) {
            printf("(%d, %d) ", linha, coluna);
        }
        printf("\n");
    }

    printf("\n");

    /*
    ===============================================
    7. COMPARAÇÃO: FOR x WHILE
    ===============================================

    FOR:
    - Quando se sabe o número de repetições
    - Código mais compacto
    - Contadores bem definidos

    WHILE:
    - Quando não se sabe quantas repetições ocorrerão
    */

    /*
    ===============================================
    8. BOAS PRÁTICAS
    ===============================================

    - Usar for quando houver contador claro
    - Evitar lógica complexa na condição
    - Nomear bem variáveis de controle
    - Evitar loops infinitos não intencionais
    */

    return 0;
}
