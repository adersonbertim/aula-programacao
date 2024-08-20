#include <stdio.h>

int main() {
  int n, x, j;
  printf("Qual o tamanho do do triangulo: ");
  scanf("%d", &n);

  for (x = 1; x <= n; x++) {
    for (j = 1; j <= n - x; j++) {
      printf(" ");
    }
    for (j = 1; j <= 2 * x - 1; j++) {
      printf("*");
    }
    printf("\n");
  }
}

/* Esse exercicio eu precisei de ajuda, estava tendo muita dificuldade no ultimo
 * loop for
 *
 * Esse codigo funciona assim:
 * O primeiro loop for:
 * Imprime os espaços necessarios para os asteriscos e a quantidade de espaço
 * diminui conforme o x aumenta O segundo loop for: Imprime os asteriscos,
 * começa com 1, depois enquanto J for menor ou igual a 2 * x - 1 ( esse valor
 * determina a quantidade de asteriscos impressas em cada linha)
 *
 * Estava tendo dificuldade nesse ultimo loop, ele estava loopando infinito e
 * crashando*/
