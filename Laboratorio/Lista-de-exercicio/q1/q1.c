#include <stdio.h>

void media(){
  int n1 = 0, n = 0, aux = 0, soma = 0, med = 0;
  
  scanf("%d", &n1);
  soma = n1;

  while (aux != n1){
    scanf("%d", &n);
    soma = soma + n;
    aux++;
  }

  med = soma / n1;
  printf("media: %d", med);
}

int main(){
  media();
  return 0;
}