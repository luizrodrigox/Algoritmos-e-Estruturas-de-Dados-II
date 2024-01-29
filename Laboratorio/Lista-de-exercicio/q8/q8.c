#include<stdio.h>

int main(){
  float produto1 = 3.00;
  float produto2 = 4.00;
  float produto3 = 2.80;
  float produto4 = 1.95;
  float produto5 = 5.00;
  float totalvarejo = 0;
  int numeroproduto, qtdvendida;
  
  while (1){
    printf("digite o numero do produto(0 para finalizar):");
    scanf("%d", &numeroproduto);
    
    if (numeroproduto == 0){
      break;
    }

    printf("digite a quantidade vendida: ");
    scanf("%d", &qtdvendida);

    switch (numeroproduto){
      case 1:
        totalvarejo += produto1 * qtdvendida;
      break;
      case 2:
        totalvarejo += produto2 * qtdvendida;
      break;
      case 3:
        totalvarejo += produto3 * qtdvendida;
      break;
      case 4:
        totalvarejo += produto4 * qtdvendida;
      break;
      case 5:
        totalvarejo += produto5 * qtdvendida;
      break;
      default:
      printf("Numero do produto inválido. Tente Novamente.\n");
      continue;
    }
  }

  printf("o valor total de varejo da semana passada foi: R$%.2f\n", totalvarejo);

  return 0;
}