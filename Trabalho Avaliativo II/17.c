#include <stdio.h>

int main() {

  int num[10];
  int i;

  for (i = 0; i < 10; i++) {
    printf("Digite um numero: ");
    scanf("%d", &num[i]);
  }

  int maior = num[0];
  int menor = num[0];

  for (i = 1; i < 10; i++) {
    if (num[i] > maior) {
      maior = num[i];
    }
    if (num[i] < menor) {
      menor = num[i];
    }
  }
  printf("O maior valor é %d \n", maior);
  printf("O menor valor é: %d\n", menor);
}

/* Duas variaveis um vetor e uma variavel para o loop for
 * Primeiro loop for, pegar os 10 numeros do usuario
 * Declara 2 variaveis que iniciam com o indice no primeiro
 *
 * Segundo loop for, passar um a um dentro do array e nos ifs ordenando que
 * quando o elemento i for maior ele ira pra variavel maior até de fato so estar
 * o maior.*/
