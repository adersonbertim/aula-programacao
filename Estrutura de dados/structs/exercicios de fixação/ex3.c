#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[50];
  int matricula;
  float nota;
} Alunos;

int main() {
  Alunos alunos[3];
  for (int i = 0; i < 3; i++) {
    printf("Digite o nome do aluno: ");
    fgets(alunos[i].nome, 50, stdin);
    alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
    printf("Digite o numero de matriculo do aluno: ");
    scanf("%d", &alunos[i].matricula);
    getchar();
    printf("Digite a nota do aluno: ");
    scanf("%f", &alunos[i].nota);
  };
  for (int i = 0; i < 3; i++) {
    printf("Nome: %s\n", alunos[i].nome);
    printf("Matricula: %d\n", alunos[i].matricula);
    printf("Nota: %2.f\n\n", alunos[i].nota);
  };
}
