#include <math.h>
#include <stdio.h>

int main() {

    float real, div;

    printf("A cotacao do Dolar para Real esta de 3,86 aproximadamente no dia de hoje: 23/08/2023. \nDigite a quantidade em reais que deseja converter para dolar(nao use virgula no valor, use ponto): ");
    scanf("%f", &real);
    while (getchar() != '\n');

    div = (float)real / (float)4.85727;

    printf("\n*Conversao sucedida!* \nO valor de %.2fR$ equivale a %.2f$;", real, div);


  return 0;
}