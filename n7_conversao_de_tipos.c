#include <stdio.h>

int main(){

/***************************************************
 * CONVERSÃO DE TIPOS EM C
 *  - Implícita
 *  - Explícita (type casting)
 ***************************************************/

/* =================================================
   1. CONVERSÃO IMPLÍCITA
   ================================================= */

/*
A conversão implícita acontece automaticamente,
quando o compilador converte um tipo em outro
para realizar uma operação.
*/

int a = 5;
int b = 2;

float resultado1 = a / b;  
// a / b = 2 (divisão inteira)
// depois 2 é convertido para float → 2.0

float resultado2 = a + b;  
// a + b = 7 → convertido para float → 7.0


/* =================================================
   1.1 Promoção de tipos (type promotion)
   ================================================= */

/*
Quando tipos diferentes participam da mesma expressão,
o compilador promove o tipo "menor" para o "maior".
*/

int i = 3;
float f = 2.5;

float resultado3 = i + f;  
// i (int) é promovido para float → 3.0
// resultado = 5.5


double d = 4.2;
float f2 = 1.8;

double resultado4 = d + f2;  
// f2 (float) é promovido para double


/* Ordem simplificada de promoção:
   char → int → float → double
*/


/* =================================================
   1.2 Conversão implícita em atribuição
   ================================================= */

float x = 3.7;
int y = x;  
// y recebe 3
// parte decimal é descartada (truncamento)


/* =================================================
   2. CONVERSÃO EXPLÍCITA (TYPE CASTING)
   ================================================= */

/*
A conversão explícita acontece quando o programador
força a mudança de tipo usando cast.
*/

int m = 5;
int n = 2;

float resultado5 = (float)m / n;
// m é convertido para float antes da divisão
// resultado = 2.5


/* =================================================
   2.1 Cast em atribuição
   ================================================= */

float z = 9.9;
int w = (int)z;
// w recebe 9
// parte decimal é descartada


/* =================================================
   2.2 Cast em expressões mais complexas
   ================================================= */

int p = 10;
int q = 3;

float media = (float)(p + q) / 2;
// (p + q) = 13 → convertido para float
// 13 / 2 = 6.5


/* =================================================
   3. CONVERSÃO ENTRE TIPOS INTEIROS
   ================================================= */

char c = 65;
int ascii = c;
// c é promovido para int → 65

char letra = (char)66;
// letra recebe 'B'


/* =================================================
   4. CONVERSÃO E ARMADILHAS COMUNS
   ================================================= */

/* ❌ Erro clássico: divisão inteira inesperada */
float r1 = 5 / 2;      // r1 = 2.0 ❌
float r2 = 5.0 / 2;    // r2 = 2.5 ✔️
float r3 = (float)5 / 2; // r3 = 2.5 ✔️


/* ❌ Perda de precisão */
double d1 = 3.14159;
int i1 = d1;   // i1 = 3 (truncamento)


/* =================================================
   5. BOAS PRÁTICAS
   ================================================= */

/*
1) Sempre use cast explícito quando:
   - quiser garantir divisão real
   - quiser deixar a intenção clara no código

2) Evite depender de conversões implícitas
   em expressões importantes.

3) Lembre-se:
   - conversão implícita pode perder dados
   - cast explícito também pode perder dados,
     mas é uma decisão consciente.
*/


/* =================================================
   6. RESUMO FINAL
   ================================================= */

/*
CONVERSÃO IMPLÍCITA:
- Feita automaticamente pelo compilador
- Pode causar divisão inteira indesejada
- Pode causar perda de dados

CONVERSÃO EXPLÍCITA:
- Feita pelo programador (cast)
- Torna o código mais previsível
- Evita erros silenciosos
*/
}