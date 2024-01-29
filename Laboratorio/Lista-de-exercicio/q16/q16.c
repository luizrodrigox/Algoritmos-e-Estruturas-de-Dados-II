#include <stdio.h>

void exibeRetanguloSolido(int lado1, int lado2, char caractere) {
  for (int i = 0; i < lado1; i++) {
    for (int j = 0; j < lado2; j++) {
        printf("%c ", caractere);
    }
    printf("\n");
  }
}

int main() {
  int lado1, lado2;
  char caractere;

  printf("Digite o valor do lado1: ");
  scanf("%d", &lado1);

  printf("Digite o valor do lado2: ");
  scanf("%d", &lado2);

  printf("Digite o caractere desejado: ");
  scanf(" %c", &caractere);

  exibeRetanguloSolido(lado1, lado2, caractere);

  return 0;
}