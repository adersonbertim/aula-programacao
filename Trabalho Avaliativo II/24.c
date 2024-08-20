#include <stdio.h>

int main() {
  int contador = 0, num;

  printf("Digite um numero por favor: ");
  scanf("%d", &num);

  if (num == 0) { // Verifica se o numero é igual a 0 se for imprime a mensagem
                  // se for negativo ele o torna positvo
    printf("Você digitou 0 apenas");
  } else if (num < 0) {
    num = -num;
  }
  while (num > 0) { // Enquanto for maior que zero, ele pega o numero divide por
                    // 10 para obter 1 e incrementar no contador
    num /= 10;
    contador++;
  }
  if (contador >
      0) { // Se o contador tem mais que 0 digitos ele imprime essa mensagem
    printf("O numero digitado tem %d digitos", contador);
  }
}
