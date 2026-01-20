/*
===============================================
ESTRUTURAS DE DECISÃO EM C
Encadeadas e Aninhadas
===============================================

Este arquivo serve como material de consulta rápida
sobre estruturas condicionais mais comuns em C.

Autor: Luiz
Descrição:
- Estrutura de decisão encadeada (else if)
- Estrutura de decisão aninhada (if dentro de if)
===============================================
*/

#include <stdio.h>

int main() {

    /*
    ===============================================
    1. ESTRUTURA DE DECISÃO ENCADEADA (else if)
    ===============================================

    - Usada quando há múltiplas condições EXCLUSIVAS
    - Apenas UM bloco será executado
    - A verificação ocorre de cima para baixo
    */

    int nota = 75;

    if (nota >= 90) {
        printf("Conceito A\n");
    }
    else if (nota >= 70) {
        printf("Conceito B\n");
    }
    else if (nota >= 50) {
        printf("Conceito C\n");
    }
    else {
        printf("Reprovado\n");
    }

    /*
    Fluxo:
    - Se nota >= 90 → executa e para
    - Senão, testa >= 70
    - Senão, testa >= 50
    - Senão, executa o else
    */

    printf("\n");

    /*
    ===============================================
    2. ESTRUTURA DE DECISÃO ANINHADA
    ===============================================

    - Um if dentro de outro if
    - Usada quando uma condição DEPENDE da outra
    - Muito comum em validações em etapas
    */

    int idade = 20;
    int temCarteira = 1; // 1 = verdadeiro, 0 = falso

    if (idade >= 18) {
        // Só entra aqui se for maior de idade
        if (temCarteira) {
            printf("Pode dirigir\n");
        } else {
            printf("Maior de idade, mas sem carteira\n");
        }
    } else {
        printf("Menor de idade\n");
    }

    /*
    Fluxo:
    - Primeiro valida idade
    - Só depois valida carteira
    */

    printf("\n");

    /*
    ===============================================
    3. COMPARAÇÃO RÁPIDA
    ===============================================

    ENCADEADA (else if):
    - Condições independentes
    - Escolha entre várias opções
    - Mais legível para faixas de valores

    ANINHADA:
    - Uma condição depende da outra
    - Validações sequenciais
    - Pode ficar confusa se houver muitos níveis
    */

    /*
    ===============================================
    4. BOAS PRÁTICAS
    ===============================================

    - Prefira else if quando possível
    - Evite muitos níveis de if aninhados
    - Use indentação clara
    - Condições simples e objetivas
    */

    return 0;
}
