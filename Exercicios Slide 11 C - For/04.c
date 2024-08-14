#include <stdio.h>

int main() {
  int num[10];
  int x, maior, menor;

  for (x = 0; x < 10; x++) {
    printf("Digite um numero: ");
    scanf("%d", &num[x]);
  };

  maior = num[0];
  menor = num[0];

  for (x = 0; x < 10; x++) {
    if (num[x] > maior) {
      maior = num[x];
    }
    if (num[x] < menor) {
      menor = num[x];
    }
  }
  printf("Maior %d e o menor %d", maior, menor);
}
