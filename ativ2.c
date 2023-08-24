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

  int var1, multx2;

  printf("Funcao matematica para descobrir o dobro do seu numero. \nPara "
         "calcular me diga o numero que deseja dobrar: ");
  scanf("%d", &var1);
  while (getchar() != '\n')
    ;

  multx2 = var1 * 2;

  printf("O dobro de %d resulta em %d.", var1, multx2);

  return 0;
}