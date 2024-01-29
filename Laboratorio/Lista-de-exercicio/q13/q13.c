#include <stdio.h>

int obtemDiaSemana(int dia, int mes, int ano) {
  if (mes < 3) {
    mes += 12;
    ano--;
  }

  int K = ano % 100;
  int J = ano / 100;

  int diaSemana = (dia + 13 * (mes + 1) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;

  diaSemana = (diaSemana + 5) % 7;

  return diaSemana;
}

int main(){
  int dia, mes, ano;

  printf("Digite a data (dia mes ano): ");
  scanf("%d %d %d", &dia, &mes, &ano);

  if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0) {
    printf("Data inválida!\n");
    return 1;
  }

  int diaSemana = obtemDiaSemana(dia, mes, ano);

  switch (diaSemana){
    case 0:
      printf("Domingo\n");
      break;
    case 1:
      printf("Segunda-feira\n");
      break;
    case 2:
      printf("Terça-feira\n");
      break;
    case 3:
      printf("Quarta-feira\n");
      break;
    case 4:
      printf("Quinta-feira\n");
      break;
    case 5:
      printf("Sexta-feira\n");
      break;
    case 6:
      printf("Sábado\n");
      break;
  }

  return 0;
}