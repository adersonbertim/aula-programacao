#include <stdio.h>

int main() {
  int ch;
  float grana;
  float contagem = 0;
  float din = 3.75;

  printf("O valor da passagem é R$3,75 por favor insira as moedas e celulas "
         "uma a uma: \n");
  while (contagem < din) {
    printf("1. R$0,25\n2. R$0,50\n3. R$1,00\n4. R$2,00\n");
    scanf("%d", &ch);

    switch (ch) {
    case 1:
      contagem += 0.25;
      break;
    case 2:
      contagem += 0.50;
      break;
    case 3:
      contagem += 1;
      break;
    case 4:
      contagem += 2;
      break;
    default:
      printf("Insira um valor de acordo com as opções!");
    }
    contagem++;
  }
  if (contagem > din) {
    printf("Aqui esta o seu troco %.2f ", contagem - 3.75);
  }
  printf("\nSua passagem foi liberada!\nTenha uma boa viagem até seu destino e "
         "obrigado por usar nossos transportes!");
}
