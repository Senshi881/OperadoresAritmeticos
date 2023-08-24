#include <math.h>
#include <stdio.h>

int main() {

  float carroN, carroF;


  printf("Me informe o valor do carro de fabrica: ");
  scanf("%f", &carroF);
  while (getchar() != '\n');
  
  float distribuidor = (carroF * 28) / 100;
  float impostos = (carroF * 45) / 100; 
  carroN = carroF + impostos + distribuidor;

  printf("O valor do carro novo e de %.2fR$;", carroN);


  return 0;
}