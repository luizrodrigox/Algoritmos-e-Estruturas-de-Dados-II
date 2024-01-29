#include <stdio.h>

void exibeRetanguloSolido(int lado1, int lado2) {
  for (int i = 0; i < lado1; i++) {
    for (int j = 0; j < lado2; j++) {
      printf("* ");
    }
    printf("\n");
  }
}

int main() {
  int lado1, lado2;

  printf("Digite o valor do lado1: ");
  scanf("%d", &lado1);

  printf("Digite o valor do lado2: ");
  scanf("%d", &lado2);

  if (lado1 <= 0 || lado2 <= 0) {
    printf("Os lados devem ter valores positivos.\n");
    return 1;
  }

  exibeRetanguloSolido(lado1, lado2);

  return 0;
}