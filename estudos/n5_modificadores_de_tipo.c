/***************************************************
 * MODIFICADORES DE TIPOS DE DADOS EM C
 ***************************************************/

/*
Modificadores alteram:
- o tamanho em memória
- o intervalo de valores
- o comportamento com sinal (positivo/negativo)
de um tipo de dado básico.
*/

/* =================================================
   1. MODIFICADORES DE SINAL
   ================================================= */

/*
signed   → permite valores positivos e negativos
unsigned → permite apenas valores não negativos
*/

signed int a = -10;       // padrão para int
unsigned int b = 10;     // nunca negativo

/* Intervalo típico (int 32 bits):
   signed int   → -2.147.483.648 até 2.147.483.647
   unsigned int → 0 até 4.294.967.295
*/


/* =================================================
   2. MODIFICADORES DE TAMANHO
   ================================================= */

/*
short → reduz o tamanho
long  → aumenta o tamanho
*/

short int s = 32000;
long int l = 1000000;

/* Observação:
   - int pode ser omitido:
     short s;
     long l;
*/


/* =================================================
   3. COMBINAÇÃO DE MODIFICADORES
   ================================================= */

unsigned short int us = 65535;
signed long int sl = -2000000;
unsigned long int ul = 4000000;


/* =================================================
   4. TIPOS INTEIROS COM MODIFICADORES
   ================================================= */

char c1 = 'A';                 // pode ser signed ou unsigned (depende do compilador)
signed char c2 = -50;
unsigned char c3 = 200;

short int si = -32768;
unsigned short int usi = 65535;

int i = 100;
unsigned int ui = 300;

long int li = 100000L;
unsigned long int uli = 400000UL;


/* =================================================
   5. MODIFICADORES EM TIPOS REAIS
   ================================================= */

/*
Apenas o tipo double aceita modificador de tamanho.
*/

float f = 3.14f;        // precisão simples
double d = 3.14159265;  // precisão dupla
long double ld = 3.141592653589793L;  // maior precisão


/* =================================================
   6. sizeof — verificando o tamanho dos tipos
   ================================================= */

#include <stdio.h>

int main() {
    printf("char: %zu byte\n", sizeof(char));
    printf("short: %zu bytes\n", sizeof(short));
    printf("int: %zu bytes\n", sizeof(int));
    printf("long: %zu bytes\n", sizeof(long));
    printf("long long: %zu bytes\n", sizeof(long long));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("long double: %zu bytes\n", sizeof(long double));

    return 0;
}


/* =================================================
   7. MODIFICADORES INVÁLIDOS
   ================================================= */

/*
❌ NÃO EXISTEM:
unsigned float
signed double
short float
long char

✔️ Modificadores só se aplicam
a tipos específicos.
*/


/* =================================================
   8. BOAS PRÁTICAS
   ================================================= */

/*
1) Use unsigned apenas quando fizer sentido lógico
   (ex: contadores, tamanhos).

2) Evite depender do tamanho exato dos tipos.
   Prefira stdint.h quando precisar precisão:
   int32_t, uint8_t, etc.

3) Nunca assuma que char é signed.
   Declare explicitamente se isso importar.
*/


/* =================================================
   9. RESUMO FINAL
   ================================================= */

/*
MODIFICADORES DE SINAL:
- signed
- unsigned

MODIFICADORES DE TAMANHO:
- short
- long
- long long

AFETAM:
- intervalo de valores
- consumo de memória
- comportamento aritmético
*/
