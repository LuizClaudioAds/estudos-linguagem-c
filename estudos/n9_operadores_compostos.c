int main(){



/***************************************************
 * ESTRUTURA DE DECISÃO COMPOSTA EM C
 * if / else
 ***************************************************/

/*
A estrutura de decisão composta permite
executar UM bloco de código quando a condição
é verdadeira e OUTRO quando é falsa.
*/


/* =================================================
   1. SINTAXE BÁSICA
   ================================================= */
/*
if (condicao) {
    // executado se a condição for verdadeira
} else {
    // executado se a condição for falsa
}
*/

/* =================================================
   2. EXEMPLO SIMPLES
   ================================================= */

int idade = 17;

if (idade >= 18) {
    printf("Maior de idade\n");
} else {
    printf("Menor de idade\n");
}


/* =================================================
   3. CONDIÇÕES COM OPERADORES RELACIONAIS
   ================================================= */

int a = 10;
int b = 20;

if (a > b) {
    printf("a é maior que b\n");
} else {
    printf("a não é maior que b\n");
}


/* =================================================
   4. CONDIÇÕES COM OPERADORES LÓGICOS
   ================================================= */

int idade = 25;
int habilitado = 0;

if (idade >= 18 && habilitado) {
    printf("Pode dirigir\n");
} else {
    printf("Não pode dirigir\n");
}


/* =================================================
   5. BLOCO else if (DECISÃO ENCADEADA)
   ================================================= */

/*
Usado quando há MAIS DE DUAS possibilidades.
*/

int nota = 75;

if (nota >= 90) {
    printf("Excelente\n");
} else if (nota >= 70) {
    printf("Aprovado\n");
} else {
    printf("Reprovado\n");
}


/* =================================================
   6. else if VS if INDEPENDENTES
   ================================================= */

/* ✔️ Encadeado (apenas um bloco executa) */
if (nota >= 90) {
    printf("Excelente\n");
} else if (nota >= 70) {
    printf("Aprovado\n");
} else {
    printf("Reprovado\n");
}

/* ❌ Independentes (mais de um pode executar) */
if (nota >= 90) {
    printf("Excelente\n");
}
if (nota >= 70) {
    printf("Aprovado\n");
}


/* =================================================
   7. USO SEM CHAVES (NÃO RECOMENDADO)
   ================================================= */

if (idade >= 18)
    printf("Maior de idade\n");
else
    printf("Menor de idade\n");

/*
⚠️ Funciona, mas pode gerar erros de leitura.
Boa prática: SEMPRE usar chaves.
*/


/* =================================================
   8. ESTRUTURA ANINHADA
   ================================================= */

int saldo = 500;
int senha_correta = 1;

if (senha_correta) {
    if (saldo > 0) {
        printf("Saque autorizado\n");
    } else {
        printf("Saldo insuficiente\n");
    }
} else {
    printf("Senha incorreta\n");
}


/* =================================================
   9. EXPRESSÕES QUE RESULTAM EM VERDADEIRO/FALSO
   ================================================= */

int x = 5;

if (x) {
    printf("x é diferente de zero\n");
} else {
    printf("x é zero\n");
}


/* =================================================
   10. ERROS COMUNS
   ================================================= */

/* ❌ Confundir = com == */
if (x = 10) {   // atribuição, sempre verdadeiro
    printf("Erro lógico\n");
}

/* ✔️ Correto */
if (x == 10) {
    printf("Comparação correta\n");
}


/* =================================================
   11. RESUMO FINAL
   ================================================= */

/*
ESTRUTURA:
if (...) { }
else { }

CARACTERÍSTICAS:
- Executa apenas UM dos blocos
- Pode usar operadores relacionais e lógicos
- else é opcional
- else if permite múltiplas decisões

BOAS PRÁTICAS:
- Sempre usar chaves
- Evitar condições complexas sem parênteses
- Código claro > código curto
*/
    return 0;
}