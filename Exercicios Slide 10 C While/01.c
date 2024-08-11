#include <stdio.h>

int main() {
  int x, n = 0;
  printf("Digite qual tabuada deseja saber: ");
  scanf("%d", &x);

  while (n <= 10) {
    printf("Tabuada do %d X %d = %d \n", x, n, x * n);
    n++;
  };
}

/* A parte de inteiro serve para declarar o tipo de variavel
 * temos o X e o N que é inciado em 0
 * As funções printf faz com que o usuario digite qual tabuada ele quer, 2,3,4..
 * scanf recebe o %d como identificador do tipo de variavel nesse caso "inteiro"
 * Estrutura while (enquanto) para loopar fazendo com que começe em 0 e enquanto
 * for menor que 10 ele ira realizar as condições até se tornarem verdadeiras
 * nesse caso o loop da tabuada.*/
