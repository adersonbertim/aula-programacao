#include <stdio.h>

int main() {
  int n1, n2, i;
  for (i = 1; i < 2; i++) {
    printf("Digite um numero para multiplicar: ");
    scanf("%d", &n1);
    printf("Digite um segundo numero para multiplicar: ");
    scanf("%d", &n2);
  }
  printf("O resultado de %d X %d é igual a %d", n1, n2, n1 * n2);
}

/* Esse precisa de 3 variaveis
 * um n1 para o numero 1
 * n2 para o numero 2
 * um i para o loop for
 *
 * Depois fazer a multiplicação*/
