#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[30];
  char cidade[20];
  unsigned long int CEP;
} endereco;

int main() {

  endereco pessoa[3];

  for (int i = 0; i < 3; i++) {
    printf("Digite o nome %d :", i + 1);
    fgets(pessoa[i].nome, 30, stdin);
    pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0';

    printf("Digite a cidade %d :", i + 1);
    fgets(pessoa[i].cidade, 20, stdin);
    pessoa[i].cidade[strcspn(pessoa[i].cidade, "\n")] = '\0';

    printf("Digite o CEP %d :", i + 1);
    scanf("%lu", &pessoa[i].CEP);
    getchar();
  };
  getchar();

  for (int i = 0; i < 3; i++) {
    printf("Pessoa %d ", i + 1);
    printf("Nome: %s \n", pessoa[i].nome);
    printf("Cidade: %s \n", pessoa[i].cidade);
    printf("CEP %lu \n\n", pessoa[i].CEP);
  };
  return 0;
}
