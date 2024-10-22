#include <stdio.h>

int main() {
  float valorCompra, totalGasto = 0.0f;
  int pontosFidelidade = 0;
  char continuarCompra = 's';

  while (continuarCompra == 's' || continuarCompra == 'S') {
    printf("Informe o valor da compra: R$ ");
    scanf(" %f", &valorCompra);

    // Verifica se o valor da compra é válido (não negativo)
    if (valorCompra >= 0) {
      totalGasto += valorCompra; // Acumula o valor da compra ao total gasto
      pontosFidelidade =
          totalGasto /
          10; // Calcula pontos de fidelidade (1 ponto a cada R$ 10)
      printf(
          "Valor total gasto: R$ %.2f\nPontos de fidelidade acumulados: %d\n",
          totalGasto, pontosFidelidade);
    } else {
      printf("Valor não é válido. Tente novamente.\n");
    }

    printf("Deseja realizar outra compra? (s/n): ");
    scanf(" %c", &continuarCompra);
  }

  // Exibe os pontos de fidelidade finais
  printf("\nSeus pontos de fidelidade são: %d\n", pontosFidelidade);

  return 0;
}
