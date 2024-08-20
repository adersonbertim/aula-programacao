#include <stdio.h>

int main() {
  int n;
  printf("Digite um numero do qual deseja saber sua tabuada: ");
  scanf("%d", &n);
  for (int i = 0; i < 11; i++) {
    printf("%d x %d = %d\n", n, i, n * i);
  }
}

/* Exercicio de tabuada, o usuario fornece um numero
 * O numero é lido...
 * No loop for, eu inicio com uma variavel i = 0, enquanto i < 11, ele soma mais
 * um i No printf é feito a leitura do numero do usuario, a posição de i, e o
 * resultado da multiplicação de ambos*/
