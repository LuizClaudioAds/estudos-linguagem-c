#include <stdio.h>

int main(){
    
/***************************************************
 * OPERADORES EM C – RESUMO PARA ESTUDO
 ***************************************************

/* =================================================
   1. OPERADORES MATEMÁTICOS (ARITMÉTICOS)
   ================================================= */

int a = 10;
int b = 3;

int soma        = a + b;   // Adição → 13
int subtracao   = a - b;   // Subtração → 7
int multiplicar = a * b;   // Multiplicação → 30
int divisao     = a / b;   // Divisão inteira → 3 (parte decimal é descartada)
int resto       = a % b;   // Módulo (resto da divisão) → 1

/* Observação importante:
   - Se ambos os operandos forem inteiros, o resultado da divisão é inteiro.
   - Para obter resultado decimal, use float ou double.
*/

float x = 10.0;
float y = 3.0;
float div_real = x / y;   // → 3.3333...


/* =================================================
   2. OPERADORES DE ATRIBUIÇÃO
   ================================================= */

/* Atribuição simples */
int c;
c = 5;   // Atribui o valor 5 à variável c

/* Atribuição composta (atalhos) */
int d = 10;

d += 5;  // d = d + 5  → 15
d -= 3;  // d = d - 3  → 12
d *= 2;  // d = d * 2  → 24
d /= 4;  // d = d / 4  → 6
d %= 5;  // d = d % 5  → 1

/* Esses operadores tornam o código mais curto
   e mais legível.
*/


/* =================================================
   3. OPERADORES DE INCREMENTO E DECREMENTO
   ================================================= */

int i = 5;

/* Incremento */
i++;    // Pós-incremento → i = i + 1 (agora i = 6)
++i;    // Pré-incremento → i = i + 1 (agora i = 7)

/* Decremento */
i--;    // Pós-decremento → i = i - 1 (agora i = 6)
--i;    // Pré-decremento → i = i - 1 (agora i = 5)


/* =================================================
   DIFERENÇA ENTRE PRÉ E PÓS INCREMENTO
   ================================================= */

int n = 10;

int a1 = n++;  // a1 recebe 10, depois n vira 11
int a2 = ++n;  // n vira 12, depois a2 recebe 12

/* Resumo:
   - Pós (++ ou -- depois): usa o valor e depois altera
   - Pré (++ ou -- antes): altera o valor e depois usa
*/


/* =================================================
   DICAS IMPORTANTES
   ================================================= */

/*
1) Operadores de incremento/decremento são muito usados
   em laços (for, while).

2) Evite usar múltiplos ++ e -- na mesma expressão
   (pode causar comportamento indefinido).

3) Sempre fique atento ao tipo da variável (int, float, double),
   pois isso muda o resultado das operações.
*/
}