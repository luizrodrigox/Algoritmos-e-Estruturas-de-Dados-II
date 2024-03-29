#include <stdio.h>

int isPerfect(int numero) {
  int soma = 1;
  for (int i = 2; i <= numero / 2; i++) {
    if (numero % i == 0) {
      soma += i;
    }
  }

  return (soma == numero);
}

int main() {
  printf("Números perfeitos entre 1 e 1000:\n");

  for (int i = 1; i <= 1000; i++) {
    if (isPerfect(i)) {
      printf("%d é um número perfeito. Fatores: 1", i);

      for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
          printf(" + %d", j);
        }
      }

      printf("\n");
    }
  }

  return 0;
}