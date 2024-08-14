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
/* Primeiro foi criado uma variavel inteiro como ARRAY para armazenar 10 numeros
 * São criados 3 variaveis, uma X(auxiliar), para armazenar o maior e menor
 * O primeiro FOR, serve para armazenar os 10 numeros verificando um a um
 * Depois é declarado ambas variaveis com inicio na posição 0 da variavel
 * Segundo FOR serve para passar as posições e verificando ...
 * Entra no IF pegando a posição X do array, e verificando qual maior ....
 * quando ele acha o maior ele o associa com a posição
 * No menor funciona da mesma forma
 * Depois é printado ja que ambos foram associados as variaveis maior e menor.
 */
