#include <stdio.h>
#include <math.h>

double hipotenusa(double cateto1, double cateto2) {
  return sqrt(cateto1 * cateto1 + cateto2 * cateto2);
}

int main() {
  double cateto1, cateto2;

  printf("Digite o comprimento do primeiro cateto: ");
  scanf("%lf", &cateto1);

  printf("Digite o comprimento do segundo cateto: ");
  scanf("%lf", &cateto2);

  if (cateto1 <= 0 || cateto2 <= 0) {
    printf("Os comprimentos dos catetos devem ser positivos.\n");
    return 1;
  }

  double resultado = hipotenusa(cateto1, cateto2);

  printf("O comprimento da hipotenusa é: %.2lf\n", resultado);

  return 0;
}