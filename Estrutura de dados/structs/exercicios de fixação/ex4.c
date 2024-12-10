#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int codigo;
  char nomeProd[30];
  float valor;
} Produto;

int main() {
  Produto prod;

  int numP;
  printf("Quantos produtos deseja cadastrar? ");
  scanf("%d", &numP);
  getchar();

  Produto *nProd = malloc(numP * sizeof(Produto));
  if (nProd == NULL) {
    printf("Erro ao alocar o espaço necessario!");
    return 1;
  };

  for (int i = 0; i < numP; i++) {
    // Vai ser um loop com o numero de produtos que o usuario decidir
    // --------- Codigo do produto
    printf("Digite o codigo do produto. \n");
    scanf("%d", &nProd[i].codigo);
    getchar();
    // --------- Nome do Produto
    printf("Digite o nome do produto. \n");
    fgets(nProd[i].nomeProd, 30, stdin);
    nProd[i].nomeProd[strcspn(nProd[i].nomeProd, "\n")] = '\0';
    // --------- Valor do Produto
    printf("Digite o valor desse produto: ");
    scanf("%f", &nProd[i].valor);
    getchar();
  };

  for (int i = 0; i < numP; i++) {
    if (nProd[i].valor < 50) {
      printf("Codigo do produto: %d. \n", nProd[i].codigo);
      printf("Nome do produto: %s .\n", nProd[i].nomeProd);
      printf("Valor do produto: %.2f \n\n", nProd[i].valor);
    };
  };
  free(nProd);
  return 0;
}
