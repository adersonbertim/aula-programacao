#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char titulo[100];
  char autor[30];
  float valor;
} Livro;

int main() {
  int numL;

  printf("Quantos livros quer avaliar? ");
  scanf("%d", &numL);
  getchar();

  Livro *numLV = malloc(numL * sizeof(Livro));

  if (numLV == NULL) {
    printf("Espaço insuficiente para armazenamento!");
    return 1;
  }

  return 0;
}
