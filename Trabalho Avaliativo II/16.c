#include <stdio.h>
#include <stdlib.h> // Inclui a função srand e rand
#include <time.h>   // Inclui a função time

int main() {
  /* int i; */
  /**/
  /* for (i = 0; i <= 10; i++) { */
  /*   printf("%d ", rand() % 100); */
  /* } */
  int num[100];

  printf("Gerando os numeros aleatorios ...... \n\n");
  srand(time(0));

  for (int x = 0; x <= 10; x++) {
    num[x] = rand() % 100 + 1;
    printf("%d \n", num[x]);
  }
}

/* Para gerar 10 numeros aleatorios
 * Existem dois metodos pelo menos um facil e outro mais "completo"
 * O primeiro e declarar uma variavel i, um loop for que inicia em 0 e vai até
 * 10 Uma função printf que gera 10 numeros aleatorios usando a função rand
 *
 * 2) Metodo mais "completo"
 * Declara um vetor de 100 posições
 * é usado uma função srand e time, o srand serve para que quando o time seja
 * ativado sempre seja 10 numeros aleatorios, caso nao tivesse a função time,
 * possivelmente a geração seria a mesma por um periodo de tempo Apos isso entra
 * no loop for, ai temos o vetor que fica com 10 posições, usando o rand % 100 +
 * 1, (+ 1 para ajustar de fato para 100) Ai por ultimo ele vai printando os 10
 * numeros na tela para o usuario*/
