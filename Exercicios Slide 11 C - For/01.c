#include <stdio.h>

int main() {
  int num, i;
  printf("Digite de qual tabuada precisa saber: \n");
  scanf("%d", &num);
  for (i = 0; i < 11; i++) {
    printf("A tabuada de %d X %d = %d\n", num, i, num * i);
  }
  return 0;
}
/* Exercicio da tabuada
 * Pega do usuario o numero que ele quer
 * Entra no for o I, variavel para realizar o loop indo do 0 ao 10
 * Printado na tela para o usuario do 0 ao 10.
 */
