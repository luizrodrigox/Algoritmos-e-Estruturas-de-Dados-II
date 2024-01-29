#include <stdio.h>

int segundosDesdeMeiaNoite(int horas, int minutos, int segundos) {
  return horas * 3600 + minutos * 60 + segundos;
}

int diferencaDeTempo(int horas1, int minutos1, int segundos1, int horas2, int minutos2, int segundos2) {
  int tempo1 = segundosDesdeMeiaNoite(horas1, minutos1, segundos1);
  int tempo2 = segundosDesdeMeiaNoite(horas2, minutos2, segundos2);

  int diferenca = (tempo2 - tempo1 + 12 * 3600) % (12 * 3600);

  return diferenca;
}

int main() {
  int horas1, minutos1, segundos1;
  int horas2, minutos2, segundos2;

  printf("Digite o primeiro horário (hh:mm:ss): ");
  scanf("%d:%d:%d", &horas1, &minutos1, &segundos1);

  printf("Digite o segundo horário (hh:mm:ss): ");
  scanf("%d:%d:%d", &horas2, &minutos2, &segundos2);

  int diferenca = diferencaDeTempo(horas1, minutos1, segundos1, horas2, minutos2, segundos2);

  printf("A diferença de tempo é de %d segundos.\n", diferenca);

  return 0;
}