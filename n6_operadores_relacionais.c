int main(){
/***************************************************
 * OPERADORES RELACIONAIS EM C
 ***************************************************/

/*
Operadores relacionais são usados para comparar
dois valores. O resultado da comparação é:
- 1 → verdadeiro (true)
- 0 → falso (false)

Em C, NÃO existe tipo booleano nativo clássico
(o _Bool existe, mas normalmente usamos int).
*/

/* =================================================
   1. OPERADORES RELACIONAIS
   ================================================= */

int a = 10;
int b = 5;

int r1 = a > b;    // maior que        → 1
int r2 = a < b;    // menor que        → 0
int r3 = a >= b;   // maior ou igual   → 1
int r4 = a <= b;   // menor ou igual   → 0
int r5 = a == b;   // igual a          → 0
int r6 = a != b;   // diferente de     → 1


/* =================================================
   2. USO EM ESTRUTURAS DE CONTROLE
   ================================================= */

if (a > b) {
    printf("a é maior que b\n");
}

if (a == 10) {
    printf("a vale 10\n");
}

if (a != b) {
    printf("a é diferente de b\n");
}


/* =================================================
   3. COMPARAÇÃO ENTRE TIPOS DIFERENTES
   ================================================= */

int i = 5;
float f = 5.0;

if (i == f) {
    printf("i e f são iguais\n");
}
/*
- i é convertido implicitamente para float
- comparação ocorre entre valores do mesmo tipo
*/


/* =================================================
   4. ARMADILHAS COMUNS
   ================================================= */

/* ❌ Confundir = com == */
int x = 3;

if (x = 5) {   // ❌ atribuição, não comparação
    printf("Isso sempre será verdadeiro\n");
}

/* ✔️ Correto */
if (x == 5) {
    printf("x é igual a 5\n");
}


/* =================================================
   5. COMPARAÇÃO COM FLOAT E DOUBLE
   ================================================= */

float f1 = 0.1 + 0.2;
float f2 = 0.3;

if (f1 == f2) {
    printf("Iguais\n");
} else {
    printf("Diferentes\n");
}

/*
⚠️ Comparações diretas com float/double
podem falhar por erros de precisão.
*/


/* ✔️ Forma correta */
#include <math.h>

if (fabs(f1 - f2) < 0.00001) {
    printf("Aproximadamente iguais\n");
}


/* =================================================
   6. OPERADORES RELACIONAIS EM EXPRESSÕES
   ================================================= */

int idade = 20;

int pode_dirigir = idade >= 18;  // pode_dirigir = 1

int intervalo = (idade >= 18) && (idade <= 65);


/* =================================================
   7. OPERADORES RELACIONAIS COM CHAR
   ================================================= */

char c1 = 'a';
char c2 = 'b';

if (c1 < c2) {
    printf("'a' vem antes de 'b'\n");
}

/*
A comparação é feita usando o valor ASCII
dos caracteres.
*/


/* =================================================
   8. PRECEDÊNCIA DOS OPERADORES RELACIONAIS
   ================================================= */

/*
Maior precedência:
  <   <=   >   >=
Menor precedência:
  ==  !=

Sempre que houver dúvida, use parênteses.
*/

int resultado = (a + b) > (b * 2);


/* =================================================
   9. RESUMO FINAL
   ================================================= */

/*
OPERADORES RELACIONAIS:
>   maior que
<   menor que
>=  maior ou igual
<=  menor ou igual
==  igual a
!=  diferente de

RETORNO:
- 1 → verdadeiro
- 0 → falso

DICAS:
- Nunca confunda = com ==
- Evite comparar floats diretamente
- Use parênteses para clareza
*/
}