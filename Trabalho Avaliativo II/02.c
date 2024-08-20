#include <stdio.h>

int main() {
  int n = -1, acm_n = 0;

  while (n != 0) {
    printf("Digite um numero, para parar a soma digite 0: ");
    scanf("%d", &n);
    acm_n += n;
  }
  printf("O soma é: %d", acm_n);
}
/* Esse exercicio consiste em somar os numeros q o usuario digitar, enquanto ele
 * nao digita 0 Basicamente o numero é recebido pelo programa, armazenado em um
 * acumulador e somado com o proximo numero depois a soma é printada na tela*/
