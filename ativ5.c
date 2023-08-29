#include <math.h>
#include <stdio.h>

int main() {

  float custo, frete, despesas1, despesas2, venda, distancia;
  despesas1 = 0.99;
  despesas2 = 0.1;

  printf("Me informe o valor de sua mercadoria: ");
  scanf("%f", &custo);
  while (getchar() != '\n')
    ;

  printf("Agora nos informe a sua distancia que a mercadoria vai percorrer em "
         "KMs: ");
  scanf("%f", &distancia);
  while (getchar() != '\n')
    ;

  frete = distancia * despesas1 * despesas2 + custo;

  printf("Informe agora o valor da venda oferecida: ");
  scanf("%f", &venda);
  while (getchar() != '\n')
    ;

  float lucro, pFrete;

  lucro = venda - frete;
  float lucroP = fabs(lucro);
  if (lucro > 0) {
    pFrete = (lucro * 100) / frete;
  } else {
    pFrete = (lucroP * 100) / frete;
  }
  float pFreteP = fabs(pFrete);

  printf("\nO valor da sua mercadoria junto com o frete e de %.2fR$;", frete);
  if (lucro > 0) {
    printf("\nA mercadoria recebeu um lucro de %.0f%%, ou seja, um aumento de "
           "%.2fR$;",
           pFrete, lucro);
  } else {
    printf("\nA mercadoria recebeu um desconto de %.0f%%, ou seja, uma baixa "
           "de %.2fR$;",
           pFreteP, lucroP);
  }
  return 0;
}
