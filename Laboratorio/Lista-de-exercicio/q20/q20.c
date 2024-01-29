#include <stdio.h>

int somaDosDigitos(int numero) {
  int soma = 0;

  while (numero != 0) {
    soma += numero % 10;
    numero /= 10;
  }

  return soma;
}

int main() {
  int numero;

  printf("Digite um número inteiro: ");
  scanf("%d", &numero);

  int resultado = somaDosDigitos(numero);

  printf("A soma dos dígitos de %d é: %d\n", numero, resultado);

  return 0;
}