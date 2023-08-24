#include <math.h>
#include <stdio.h>

int main() {

  int idade, mesesV, diasV;



  printf("Me informe sua idade: ");
  scanf("%d", &idade);
  while (getchar() != '\n');

  printf("Agora me informe quantos meses foram vividos des do seu ultimo aniversario: ");
  scanf("%d", &mesesV);
  while (getchar() != '\n');
  
  printf("Me informe quantos dias se passaram apos a ultima data igual a data do dia do seu aniversario: ");
  scanf("%d", &diasV);
  while (getchar() != '\n');

  int anosC = idade * 365;
  int mesesC = mesesV * 30;
  int diasC = diasV + anosC + mesesC;  

  printf("Voce viveu exatamente %d dias;", diasC);


  return 0;
}