#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int vetor[5];
  int aux;
  srand(time(NULL));

  for (int a = 0; a < 5; a++) {
    vetor[a] = rand() % 10;
    printf("Vetor\n");
    printf("%d \n", vetor[a]);
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      if (vetor[j] > vetor[j + 1]) {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }
  for (int i = 0; i < 5; i++) {
    printf("%d", vetor[i]);
  }
  return 0;
}
