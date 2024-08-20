#include <stdio.h>

int main() {
  int num, i = 1, div = 0;

  printf("Digite um numero e vamos verificar se ele é primo: ");
  scanf("%d", &num);

  if (num > 0) {
    while (i <= num) {
      if (num % i == 0) {
        div++;
      }
      i++;
    }
    if (div == 2) {
      printf("É primo!");
    } else {
      printf("Não é primo");
    }
  } else {
    printf("Digite algo diferente de 0");
  }
}

/* Existem 3 variaves, uma para acumular o numero de divisores, do numero do
 * usuario e outra com um valor 1 Ele entra no if, verificando se é maior que
 * zero, caso seja ele entra para o while No while acontece o seguinte, o valor
 * 1 é comparado ao num do usuario Se for menor ou igual ele entra no if Onde é
 * feito o resto de divisão pelo i, se for 0 Ao final ele acresce mais um no
 * divisor e mais um no i O loop é refeito até o numero chegar a 1 Depois ele
 * entra no if, verificando se o numero de divisores foi 2, se foi entao é primo
 * Se foi mais entao não é, fechando esse if
 * E por fim fechando o if la de cima se o usuario coloca 0 ele entra direto na
 * mensagem*/
