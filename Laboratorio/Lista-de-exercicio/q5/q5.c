#include <stdio.h>

int main(){
  int n, soma = 0, somaquadrados = 0, somacubos = 0;

  printf("digite um numero natural:");
  scanf("%d", &n);

  for (int i = 1; i < n; i++) {
    soma = soma + i;
    somaquadrados = somaquadrados + (i*i);
    somacubos = somacubos + (i*i*i);  
  }

  printf("\nsoma = %d", soma);
  printf("\nsoma dos quadrados = %d", somaquadrados);
  printf("\nsoma dos cubos = %d", somacubos);
  
  return 0;
}