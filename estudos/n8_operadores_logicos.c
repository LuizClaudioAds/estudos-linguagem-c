int main() {
    /***************************************************
     * OPERADORES LÓGICOS EM C
     ***************************************************/
    
    /*
    Operadores lógicos são usados para combinar
    ou inverter expressões relacionais.
    
    Em C:
    - verdadeiro  → qualquer valor diferente de 0
    - falso       → 0
    */

/* =================================================
   1. OPERADORES LÓGICOS
   ================================================= */

   int a = 10;
   int b = 5;
   
   int r1 = (a > b) && (b > 0);   // AND lógico → 1
   int r2 = (a < b) || (b > 0);   // OR lógico  → 1
   int r3 = !(a == b);            // NOT lógico → 1
   
   
   /* =================================================
   2. TABELA VERDADE (RESUMO)
   ================================================= */
   
   /*
   AND (&&)
   1 && 1 → 1
   1 && 0 → 0
   0 && 1 → 0
   0 && 0 → 0
   
   OR (||)
   1 || 1 → 1
   1 || 0 → 1
   0 || 1 → 1
   0 || 0 → 0
   
   NOT (!)
   !1 → 0
   !0 → 1
   */
  
  
  /* =================================================
  3. USO EM ESTRUTURAS DE CONTROLE
  ================================================= */
  
  int idade = 20;
  int habilitado = 1;
  
  if (idade >= 18 && habilitado) {
      printf("Pode dirigir\n");
    }
    
    if (idade < 18 || !habilitado) {
        printf("Não pode dirigir\n");
    }
    
    
    /* =================================================
    4. CURTO-CIRCUITO (SHORT-CIRCUIT)
    ================================================= */
    
    /*
    Em C, && e || usam avaliação por curto-circuito.
    */
   
   int x = 0;
   int y = 10;
   
   if (x != 0 && (y / x) > 2) {
       printf("Nunca executa divisão por zero\n");
    }
    
    /*
    - Se a primeira condição do && for falsa,
    a segunda NÃO é avaliada.
    
    - Se a primeira condição do || for verdadeira,
    a segunda NÃO é avaliada.
    */
   
   
   /* =================================================
   5. OPERADORES LÓGICOS VS BITWISE
   ================================================= */
   
   /*
   ⚠️ Não confundir operadores lógicos com bitwise
   */
  
  int p = 2;   // 10 em binário
  int q = 1;   // 01 em binário
  
  int logico = p && q;  // 1 (ambos diferentes de zero)
  int bitwise = p & q; // 0 (10 & 01 = 00)
  
  
  /* =================================================
  6. OPERADOR NOT (!) EM EXPRESSÕES
  ================================================= */
  
  int status = 0;
  
  if (!status) {
      printf("Status falso\n");
    }
    
    if (!(a > b)) {
        printf("a não é maior que b\n");
    }
    
    
    /* =================================================
    7. PRECEDÊNCIA DOS OPERADORES LÓGICOS
    ================================================= */
    
    /*
    Maior precedência:
    !
    Depois:
    &&
    Menor precedência:
    ||
    
    Sempre use parênteses quando combinar
    operadores diferentes.
    */
   
   int resultado = (a > b) && (b < 10 || b == 5);
   
   
   /* =================================================
   8. ARMADILHAS COMUNS
   ================================================= */
   
   /* ❌ Usar & ou | no lugar de && ou || */
   if (a > 0 & b > 0) {   // ❌ operador bitwise
   }
   
   /* ✔️ Correto */
   if (a > 0 && b > 0) {
}


/* =================================================
9. RESUMO FINAL
================================================= */

/*
OPERADORES LÓGICOS:
&&  → E (AND)
||  → OU (OR)
!   → NÃO (NOT)

CARACTERÍSTICAS:
- Trabalham com verdadeiro (≠0) e falso (0)
- Usam curto-circuito
- Muito usados em if, while e for

DICAS:
- Cuidado com & e |
- Use parênteses para clareza
*/

return 0;
}