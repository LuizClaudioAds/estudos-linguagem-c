/*
========================================================
Arquivo: void_explicado.c
Autor: Luiz
Descrição:
    Este arquivo explica o uso do tipo `void` na linguagem C,
    incluindo sua origem conceitual, motivação histórica e
    aplicações práticas.

    O objetivo é servir como material de consulta rápida
    para estudos de linguagem C.
========================================================
*/

#include <stdio.h>
#include <stdlib.h>

/*
--------------------------------------------------------
1. O QUE É `void`?
--------------------------------------------------------

`void` é um tipo especial da linguagem C que significa:
    "ausência de valor" ou "nenhum tipo".

Ele é usado quando:
- Uma função não retorna valor
- Uma função não recebe parâmetros
- Um ponteiro pode apontar para qualquer tipo de dado
*/


/*
--------------------------------------------------------
2. `void` COMO TIPO DE RETORNO
--------------------------------------------------------

Usado quando uma função executa uma ação,
mas NÃO produz um valor de retorno.
*/

void saudacao(void) {
    printf("Ola, mundo!\n");
}

/*
Se tentarmos fazer:

int x = saudacao(); // ERRO

Isso falha porque a função retorna `void`,
ou seja, nada que possa ser armazenado.
*/


/*
--------------------------------------------------------
3. `void` EM PARÂMETROS DE FUNÇÃO
--------------------------------------------------------

`void` dentro dos parênteses indica explicitamente
que a função NÃO recebe parâmetros.

Isso melhora a segurança e a checagem em compilação.
*/

void menu(void) {
    printf("1 - Iniciar\n");
    printf("2 - Sair\n");
}

/*
Diferença importante em C:

void menu();       // parâmetros NÃO especificados
void menu(void);   // função SEM parâmetros (forma correta)
*/


/*
--------------------------------------------------------
4. `void*` — PONTEIRO GENÉRICO
--------------------------------------------------------

`void*` é um ponteiro que pode armazenar o endereço
de qualquer tipo de dado.

Ele NÃO possui tipo associado.
*/

void exemplo_void_pointer(void) {
    int numero = 42;
    float pi = 3.14;

    void *p;

    p = &numero;
    printf("Numero: %d\n", *(int*)p);

    p = &pi;
    printf("Pi: %.2f\n", *(float*)p);
}

/*
⚠️ IMPORTANTE:
Não é possível acessar diretamente um `void*`.

ERRADO:
    *p = 10;

CORRETO:
    *(int*)p = 10;
*/


/*
--------------------------------------------------------
5. EXEMPLO REAL: malloc
--------------------------------------------------------

malloc retorna um `void*` para permitir alocação
genérica de memória.
*/

void exemplo_malloc(void) {
    int *v = (int*) malloc(5 * sizeof(int));

    if (v == NULL) {
        printf("Erro de alocacao\n");
        return;
    }

    for (int i = 0; i < 5; i++) {
        v[i] = i * 10;
        printf("v[%d] = %d\n", i, v[i]);
    }

    free(v);
}


/*
--------------------------------------------------------
6. O QUE NÃO É PERMITIDO COM `void`
--------------------------------------------------------
*/

// void x;        // ❌ ERRO: variáveis do tipo void não existem
// void func();   // ⚠️ permitido, mas não especifica parâmetros


/*
--------------------------------------------------------
7. MOTIVAÇÃO HISTÓRICA
--------------------------------------------------------

O `void` foi introduzido no C para resolver problemas como:
- Funções que retornavam lixo de memória
- Falta de verificação de parâmetros
- Necessidade de código genérico sem perda de desempenho

Ele surgiu durante a evolução do C (anos 70),
inspirado por linguagens ALGOL-like e pela distinção
entre funções e procedimentos.
*/


/*
--------------------------------------------------------
8. RESUMO RÁPIDO
--------------------------------------------------------

void func(void);   // função sem retorno e sem parâmetros
void *p;           // ponteiro genérico

`void` representa ausência de valor,
mas NÃO ausência de responsabilidade do programador.
*/


/*
--------------------------------------------------------
FUNÇÃO PRINCIPAL
--------------------------------------------------------
*/

int main(void) {
    saudacao();
    menu();
    exemplo_void_pointer();
    exemplo_malloc();

    return 0;
}
