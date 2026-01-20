/*
===============================================
ESTRUTURA DE REPETIÇÃO WHILE EM C
===============================================

Este arquivo serve como material de consulta rápida
sobre a estrutura de repetição while.

Autor: Luiz
Descrição:
- Estrutura básica do while
- Fluxo de execução
- Uso comum e cuidados
===============================================
*/

#include <stdio.h>

int main() {

    /*
    ===============================================
    1. ESTRUTURA BÁSICA DO WHILE
    ===============================================

    - O while testa a condição ANTES de executar
    - O bloco pode não executar nenhuma vez
    - Ideal quando NÃO se sabe previamente
      quantas repetições serão necessárias
    */

    int contador = 1;

    while (contador <= 5) {
        printf("Contador: %d\n", contador);
        contador++;
    }

    /*
    Fluxo:
    - Testa a condição
    - Se verdadeira → executa o bloco
    - Se falsa → sai do laço
    */

    printf("\n");

    /*
    ===============================================
    2. WHILE COM CONDIÇÃO CONTROLADA PELO USUÁRIO
    ===============================================
    */

    int numero;

    printf("Digite um numero (0 para sair): ");
    scanf("%d", &numero);

    while (numero != 0) {
        printf("Voce digitou: %d\n", numero);

        printf("Digite outro numero (0 para sair): ");
        scanf("%d", &numero);
    }

    /*
    Observacao:
    - Entrada deve acontecer antes do while
      para evitar uso de lixo de memoria
    */

    printf("\n");

    /*
    ===============================================
    3. CONTROLE DE LOOP INFINITO
    ===============================================

    - Sempre garantir que a condição
      do while possa se tornar falsa
    */

    int x = 1;

    while (x <= 3) {
        printf("x = %d\n", x);
        x++; // Sem isso, o loop seria infinito
    }

    printf("\n");

    /*
    ===============================================
    4. WHILE INFINITO
    ===============================================

    - Usado quando a saída depende de break
    - Muito comum em menus
    */

    int opcao = 0;

    while (1) {

        printf("1 - Continuar\n");
        printf("2 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 2) {
            printf("Saindo...\n");
            break;
        }

        printf("Executando...\n\n");
    }

    /*
    ===============================================
    5. BOAS PRÁTICAS
    ===============================================

    - Inicializar variáveis antes do while
    - Garantir alteração da condição
    - Evitar loops infinitos não intencionais
    - Usar break apenas quando fizer sentido
    */

    return 0;
}
