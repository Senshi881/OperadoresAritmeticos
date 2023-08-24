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

  int base, altura, mult;

  printf("Para calcular a sua area preciso da base e altura.\nMe informe a "
         "base: ");
  scanf("%d", &base);
  while (getchar() != '\n')
    ;
  printf("Me informe a altura: ");
  scanf("%d", &altura);
  while (getchar() != '\n')
    ;
  printf("OBS: Caso nao foi informado o valor da altura ou da base, o "
         "resultado estara incorreto;\n");

  mult = base * altura;

  printf("\nFoi informado que a base e %d e a altura e %d. Logo a area de "
         "acordo com as informacoes dadas e %d;",
         base, altura, mult);

  return 0;
}