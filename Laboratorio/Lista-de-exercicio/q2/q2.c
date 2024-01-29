#include <stdio.h>

void conversor(){
  float f;

  printf("C  |  F\n");

  for (int c = 30; c <= 50; c++){
    f = (c * 1.8) + 32;
    printf("%d = %.1f\n", c, f);
  } 
}

int main(){
  conversor();
  return 0;
}