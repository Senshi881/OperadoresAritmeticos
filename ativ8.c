#include <math.h>
#include <stdio.h>

int main() {

  float salarioA, salarioN, diferenca;
  int reajuste;

  printf("Quanto voce recebe por mes (salario)? ");
  scanf("%f", &salarioA);
  while (getchar() != '\n')
    ;

  printf("Quantos %% sera seu reajuste (caso o reajuste seja negativo, me "
         "informe o percentual em negativo)?: ");
  scanf("%d", &reajuste);
  while (getchar() != '\n')
    ;

  int reajusteP = fabs(reajuste);

  if (reajuste > 0) {
    salarioN = (salarioA * reajuste) / 100 + salarioA;
  } else {
    salarioN = salarioA - (salarioA * reajusteP) / 100;
  }

  printf("Seu salario atual e de R$%.2f;", salarioN);
  if (reajuste < 0) {
    diferenca = salarioA - salarioN;
  } else {
    diferenca = salarioN - salarioA;
  }
  printf("\nObteve uma diferenca de R$%.2f", diferenca);

  return 0;
}