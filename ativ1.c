#include <math.h>
#include <stdio.h>

int main() {
  /* Operadores aritméticos
        soma (+)
        subtração (-)
        divisão (/)
        multiplicação (*)
        módulo (%)
        potencia (pow(n,p))
  */

  int var1, var2, soma, sub, mult;
  double div;

  printf("Operacoes matematicas de soma, subtracao, multiplicacao e divisao. "
         "Vou calcular de acordo com a ordem do numero 1 e 2, comecando pelo "
         "1. \nPara calcular me diga o primeiro numero: ");
  scanf("%d", &var1);
  while (getchar() != '\n')
    ;
  printf("Agora o segundo numero: ");
  scanf("%d", &var2);
  while (getchar() != '\n')
    ;

  soma = var1 + var2;
  sub = var1 - var2;
  mult = var1 * var2;
  div = (double)var1 / (double)var2;

  printf("Entao as operacoes de %d _ %d resulta respectivamente:", var1, var2);
  printf("\nSoma = %d", soma);
  printf("\nSubtracao = %d", sub);
  printf("\nMultiplicacao = %d", mult);
  printf("\nDivisao = %.2lf", div);

  return 0;
}