#include <stdio.h>
#include <string.h>
// uma estrutura Pessoa
struct Pessoa {
  char *nome;
  int idade;
  int cpf[11];
  float peso;
  char *nome_mae;
};
int main() {
  // declara uma variável do tipo struct
  struct Pessoa cliente;
  cliente.nome = "Osmar J. Silva";
  cliente.nome_mae = "Julia R. Silva";
  cliente.idade = 36;
  cliente.peso = 89.9;
  int cpf[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  memcpy(cliente.cpf, cpf, sizeof(cpf));

  printf("O nome do cliente e: %s\n", cliente.nome);
  printf("A idade do cliente e: %d\n", cliente.idade);
  printf("O peso do cliente e: %2.f\n", cliente.peso);
  printf("O nome da mãe do cliente e: %s\n", cliente.nome_mae);

  printf("CPF do cliente: ");
  for (int i = 0; i < 11; i++) {
    printf("%d ", cliente.cpf[i]);
  }
  return 0;
}
