/*
===============================================
ESTRUTURA DE DECISÃO SWITCH EM C
===============================================

Este arquivo serve como material de consulta rápida
sobre a estrutura de decisão switch.

Autor: Luiz
Descrição:
- Uso do switch
- case, break e default
- Quando usar switch em vez de if/else
===============================================
*/

#include <stdio.h>

int main() {

    /*
    ===============================================
    1. ESTRUTURA BÁSICA DO SWITCH
    ===============================================

    - Avalia o valor de uma expressão
    - Compara com valores constantes (case)
    - Executa o bloco correspondente
    */

    int opcao = 2;

    switch (opcao) {

        case 1:
            printf("Opcao 1 selecionada\n");
            break;

        case 2:
            printf("Opcao 2 selecionada\n");
            break;

        case 3:
            printf("Opcao 3 selecionada\n");
            break;

        default:
            printf("Opcao invalida\n");
    }

    /*
    IMPORTANTE:
    - O break encerra o switch
    - Sem break ocorre o FALL THROUGH
    */

    printf("\n");

    /*
    ===============================================
    2. FALL THROUGH (QUEDA ENTRE CASES)
    ===============================================

    - Ocorre quando o break é omitido
    - Pode ser útil em alguns cenários
    */

    int dia = 5;

    switch (dia) {

        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Dia util\n");
            break;

        case 6:
        case 7:
            printf("Final de semana\n");
            break;

        default:
            printf("Dia invalido\n");
    }

    printf("\n");

    /*
    ===============================================
    3. SWITCH COM CHAR
    ===============================================

    - Muito comum para menus e comandos
    */

    char comando = 'a';

    switch (comando) {

        case 'a':
            printf("Adicionar item\n");
            break;

        case 'r':
            printf("Remover item\n");
            break;

        case 's':
            printf("Sair\n");
            break;

        default:
            printf("Comando desconhecido\n");
    }

    printf("\n");

    /*
    ===============================================
    4. LIMITAÇÕES DO SWITCH
    ===============================================

    - Não aceita:
        * intervalos (ex: case 1 ... 5)
        * expressões lógicas (>, <, &&, ||)
        * valores variáveis nos cases

    - Aceita apenas:
        * constantes inteiras
        * caracteres
        * enums
    */

    /*
    ===============================================
    5. QUANDO USAR SWITCH OU IF/ELSE
    ===============================================

    SWITCH:
    - Comparação direta de valores
    - Menus
    - Estados fixos
    - Código mais limpo e organizado

    IF / ELSE:
    - Comparações complexas
    - Faixas de valores
    - Condições lógicas
    */

    /*
    ===============================================
    6. BOAS PRÁTICAS
    ===============================================

    - Sempre usar break (salvo fall through intencional)
    - Usar default
    - Manter cases simples
    - Indentar corretamente
    */

    return 0;
}
