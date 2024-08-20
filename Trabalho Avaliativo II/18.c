#include <stdio.h>

int main() {
  int ch;
  float temp, res;
  printf("Digite qual tipo de temperatura você deseja converter.\n1. Celsius "
         "para Fahrenheit.\n2. Fahrenheit para Celsius.\n");
  scanf("%d", &ch);
  printf("Agora digite a temperatura: ");
  scanf("%f", &temp);

  switch (ch) {
  case 1:
    res = (temp * 9 / 5) + 32;
    printf("Em Fahrenheit da %.1f", res);
    break;
  case 2:
    res = (temp - 32) * 5 / 9;
    printf("Em Celsius %.1f", res);
    break;
  default:
    printf("Digite uma opção valida!");
  }
}

/* 3 variaveis uma inteiro e duas do tipo float
 * Fazer a conversão e printar na tela*/
