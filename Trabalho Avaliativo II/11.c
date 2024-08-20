#include <stdio.h>

int main() {
  int numeros[5]; // Array para guardar os 5 numeros
  int i, j, aux;  // Variaveis de controle e auxiliar
  int n = 5;      // Variavel para o tamanho do array

  printf("Digite um numero: \n");
  for (i = 1; i <= n; i++) {
    scanf("%d", &numeros[i]);
  }

  i = 0;
  while (i < n - 1) {
    j = 0;
    while (j < n - 1) {
      if (numeros[j] > numeros[j + 1]) {
        aux = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = aux;
      }
      j++;
    }
    i++;
  }

  printf("Os numeros digitados foram: \n");
  for (i = 1; i <= 5; i++) {
    printf("%d", numeros[i]);
  }
}
/* O primeiro loop for serve para armazenar os 5 numeros digitados pelo usuario
 * Depois disso dizemos que i inicia em 0
 * Entramos no primeiro loop while, onde temos que i menor que n - 1 e depois a
 * sequencia de j que começa com 0 Esse segundo loop serve para ordenar os
 * numeros utilizando variaveis com o array +1, usando as variaveis e auxiliares
 * depois disso j++ acrescentando la em cima
 * Depois de encerrado esse loop de ordenação o i++ soma a quantidade de
 * interações Por ultimo o loop for percorrendo o array agora ordenado*/
