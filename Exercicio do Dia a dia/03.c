#include <stdio.h>

int main() {
  float valorCompra, DescPercentual;
  char contCompra;
  // Solicita ao usuario se ele quer fazer uma compra
  printf("Deseja fazer uma compra. (S/N)");
  scanf(" %c", &contCompra);
  // Enquanto for SIM
  while (contCompra == 'S' || contCompra == 's') {
    DescPercentual = 0; // Inicia em 0 essas variaveis
    valorCompra = 0;
    printf("Qual o valor da compra? R$ ");
    scanf("%f", &valorCompra);
    printf("Qual o percentual do desconto: ");
    scanf("%f", &DescPercentual);

    if (valorCompra < 0 ||
        DescPercentual < 0) { // Verificando se for menos que 0
      printf("Valores inseridos são invalidos por favor tente novamente!\n");
    } else {
      float desconto = (valorCompra / 100) * DescPercentual;
      float vlrFinal = valorCompra - desconto;
      printf("O valor da sua compra foi %.2f e seu desconto foi %2.f e o valor "
             "final da sua compra é %.2f.\n",
             valorCompra, DescPercentual, vlrFinal);
    }
    printf("\nQuer continuar fazendo compras (S/n)");
    scanf(" %c", &contCompra);
  }
}
