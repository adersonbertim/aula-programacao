#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

  for (int i = 0; i < numL; i++) {
    printf("Qual o titulo do livro. \n");
    fgets(numLV[i].titulo, 100, stdin);
    numLV[i].titulo[strcspn(numLV[i].titulo, "\n")] = '\0';

    //--------- Autor
    printf("Qual o nome do autor. \n");
    fgets(numLV[i].autor, 30, stdin);
    numLV[i].autor[strcspn(numLV[i].titulo, "\n")] = '\0';

    //--------- Valor
    printf("Qual o valor do livro: \n\n");
    scanf("%f", &numLV[i].valor);
    getchar();
  };

  for (int i = 0; i < numL; i++) {
    printf("Titulo: %s\n", numLV[i].titulo);
    printf("Autor: %s \n", numLV[i].autor);
    printf("Valor do livro: %.2f \n\n", numLV[i].valor);
  };
  free(numLV);

  return 0;
}
