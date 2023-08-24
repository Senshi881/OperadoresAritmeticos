#include <math.h>
#include <stdio.h>

int main() {

  float salarioFixo, comissao, carrosVendidos, quantidadeCV, valorCV;


  printf("Quantos carros voce vendeu esse mes? ");
  scanf("%f", &quantidadeCV);
  while (getchar() != '\n');
  
  printf("Supondo que todos tem o mesmo valor, qual era? ");
  scanf("%f", &valorCV);
  while (getchar() != '\n');

  carrosVendidos =  quantidadeCV * valorCV;
  
  printf("Qual e o seu salario fixo? ");
  scanf("%f", &salarioFixo);
  while (getchar() != '\n');
  
  printf("Qual e a sua comissao por carro vendido? ");
  scanf("%f", &comissao);
  while (getchar() != '\n');
  float comissaoF = comissao * quantidadeCV; 



  float salarioFinal = salarioFixo + comissaoF + (carrosVendidos * 5 / 100);

  printf("O valor do seu salario nesse mes sera de %.2fR$ com um montante de %.2fR$ de carros vendidos;", salarioFinal, carrosVendidos);


  return 0;
}