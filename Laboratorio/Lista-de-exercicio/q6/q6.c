#include <stdio.h>

int fatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}

int main(){
  int n;

  printf("digite um numero inteiro: ");
  scanf("%d", &n);

  printf("numero\tfatorial\n");
  for (int i = 1; i <= n; i++) {
    printf("%d\t%d\n", i, fatorial(i));
  }
  
}