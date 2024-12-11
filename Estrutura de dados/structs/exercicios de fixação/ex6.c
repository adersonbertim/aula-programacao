#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[50];
  float altura;
  float peso;
  char cpf[15];
  char sexo;
} Pessoa;

float calculaIMC(float peso, float altura) { return peso / (altura * altura); }

const char *condicao(float imc, char sexo) {
  if (sexo == 'f') {
    if (imc < 19.1)
      return "Abaixo do peso";
    else if (imc <= 25.8)
      return "No peso ideal";
    else if (imc <= 27.3)
      return "Um pouco acima do peso";
    else if (imc <= 32.3)
      return "Acima do peso ideal";
    else
      return "Obeso";
  } else if (sexo == 'm') {
    if (imc < 20.7)
      return "Abaixo do peso";
    else if (imc <= 26.4)
      return "No peso ideal";
    else if (imc <= 27.8)
      return "Um pouco acima do peso";
    else if (imc <= 31.1)
      return "Acima do peso ideal";
    else
      return "Obeso";
  }
  return "Condição invalida!";
}

int main() {
  Pessoa pessoas[5];
  char cpfBusca[15];
  int encontrou = 0;

  // --- Cadastro

  for (int i = 0; i < 5; i++) {
    printf("Cadrastro das pessoas %d", i + 1);
    printf("Nome: \n");
    fgets(pessoas[i].nome, 50, stdin);
    pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

    // ----- Altura
    printf("Digite a altura: (em metros)\n");
    scanf("%f", &pessoas[i].altura);
    getchar();

    //------- Peso
    printf("Digite o peso (em Kg) \n");
    scanf("%f", &pessoas[i].peso);
    getchar();

    // ------ CPF
    printf("CPF: \n");
    fgets(pessoas[i].cpf, 15, stdin);
    pessoas[i].cpf[strcspn(pessoas[i].cpf, "\n")] = '\0';

    // ------ Sexo
    printf("Digite a letra de seu sexo minusculo: f ou m \n");
    scanf("%c", &pessoas[i].sexo);
    getchar();
  }

  printf("Busca pelo cpf: ");
  fgets(cpfBusca, 15, stdin);
  cpfBusca[strcspn(cpfBusca, "\n")] = '\0';

  for (int i = 0; i < 5; i++) {
    if (strcmp(pessoas[i].cpf, cpfBusca) == 0) {
      encontrou = 1;
      float imc = calculaIMC(pessoas[i].peso, pessoas[i].altura);
      const char *condicao1 = condicao(imc, pessoas[i].sexo);
      printf("Resultado:\n");
      printf("Sexo: %c\n", pessoas[i].sexo);
      printf("Nome: %s\n", pessoas[i].nome);
      printf("IMC: %.1f\n", imc);
      printf("Condição: %s\n", condicao1);
    }
  }
  if (!encontrou) {
    printf("\n CPF NAO ENCONTRADO");
  }

  return 0;
}
