#include <stdio.h>

int numerosprimos(int num){
  
  if (num <= 1){
    return 0;
  }
  
  for (int i = 2; i * i <= num; i++){
    if(num % i == 0) {
      return 0;
    }
  }
  
  return 1;
}

int main(){
  for (int i = 2; i <= 100; i++){
    if(numerosprimos(i)){
      printf("%d\n", i);
    }
  }
  return 0;
}