#include <stdio.h>

int main() {
    int i, n;
    double pi_aproximado = 0.0;

    printf("Digite a quantidade de termos para calcular π(pi): ");
    scanf("%d", &n);

  for (i = 0; i < n; i++) {
    if (i % 2 == 0) {
      pi_aproximado += 4.0 / (2 * i + 1);
    } else {
      pi_aproximado -= 4.0 / (2 * i + 1);
      }

    printf("Termos: %d, Aproximacao de π(pi): %lf\n", i + 1, pi_aproximado);
  }

  return 0;
}