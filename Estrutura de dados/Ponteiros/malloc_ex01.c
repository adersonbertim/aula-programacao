#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  float *nota;
  /* peço o número de notas */
  printf("Qual o número de notas? ");
  scanf("%d", &n);
  /* continue o programa */
  nota = (float *)malloc(sizeof(float));
  if (nota == NULL) {
    float vet[n];
    printf("Não há espaço na memoria!\n");
  } else {
    float vet[n];
    for (int i = 0; i < n; i++) {
      printf("Digite a nota do aluno: ");
      scanf("%f", &nota[i]);
    }
    for (int i = 0; i < n; i++) {
      printf("%.1f\n", nota[i]);
    }
  };
  free(nota);
  return 0;
}
