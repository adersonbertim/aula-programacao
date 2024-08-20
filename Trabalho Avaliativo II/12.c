#include <stdio.h>

int main() {
  int n1, n2;

  printf("Digite dois numeros: ");
  scanf("%d %d", &n1, &n2);

  n1 = n1 + n2;
  n2 = n1 - n2;
  n1 = n1 - n2;

  printf("Novos valores!\n%d para o valor 1.\n%d para o valor 2", n1, n2);
}

/* Sem variavel auxiliar
 * Depois de coletar as variaveis do usuario
 * A troca é feita da seguinte forma, n1 vai receber a variavel 1 + variavel 2 =
 * para obtermos o valor total N2 vai receber a n1 - n2(antiga variavel) N1 vai
 * receber a n1 - n2(antiga variavel) Assim trocando ambas de posição atraves da
 * subtração.*/
