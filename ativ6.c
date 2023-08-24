#include <math.h>
#include <stdio.h>

int main() {

    float raio, area;

    printf("Posso descubrir sua area atraves do raio. \nMe informe o raio para realizarmos a conversao: ");
    scanf("%f", &raio);
    while (getchar() != '\n');

    area = 3.14 * pow(raio,2);

    printf("\nSua area e: %.2fm²;", area);


  return 0;
}