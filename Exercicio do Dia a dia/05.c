#include <stdio.h>

int main() {
  char continuarCompra = 's', tipoVeiculo;
  float valorPedagio;

  while (continuarCompra == 's' || continuarCompra == 'S') {
    printf("Qual o tipo de veículo?\n(c) Carro\n(m) Moto\n(t) Caminhão\n");
    scanf(" %c", &tipoVeiculo);

    switch (tipoVeiculo) {
    case 'c':
    case 'C':
      valorPedagio = 5.00;
      printf("O tipo de veículo é Carro e deve pagar R$%.2f de pedágio.\n",
             valorPedagio);
      break;
    case 'm':
    case 'M':
      valorPedagio = 3.00;
      printf("O tipo de veículo é Moto e deve pagar R$%.2f de pedágio.\n",
             valorPedagio);
      break;
    case 't':
    case 'T':
      valorPedagio = 10.00;
      printf("O tipo de veículo é Caminhão e deve pagar R$%.2f de pedágio.\n",
             valorPedagio);
      break;
    default:
      printf("Tipo de veículo não válido.\n");
      break;
    }

    printf("\nDeseja continuar? (s/n) ");
    scanf(" %c", &continuarCompra);
  }

  return 0;
}
