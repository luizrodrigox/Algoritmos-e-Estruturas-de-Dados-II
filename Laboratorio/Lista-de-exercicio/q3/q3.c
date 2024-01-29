#include <stdio.h>

void somamultiplos7(){
  int soma = 0;
  for (int i = 1; i <= 100; i++){
    if(i % 7 == 0){
      printf("%d\t", i);
      soma = soma + i;
    }
  }
  printf("\nsoma dos multiplos: %d", soma);
}

int main(){
  somamultiplos7();
  return 0;
}