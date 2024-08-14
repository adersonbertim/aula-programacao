#include <stdio.h>

int main() {
  int n;
  printf("Qual tamanho do quadrado: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d", i + j);
    }
    printf("\n");
  }
}
/* Solicita a quantidade de "quadrados" do tabuleiro
 * os loops funcionam da mesma forma igual o exercicio anterior, onde i = linha
 * j = coluna Diferença somamos o I + J, para obtermos a posição do caractere*/
