#include <stdio.h>

int main() {
  int x, i;

  for (x = 1; x <= 10; x += 2) {
    printf("tabuada do %d\n", x);
    for (i = 1; i <= 10; i++) {
      printf("%d X %d = %d\n", x, i, x * i);
    }
  }
}
/* Esse exercicio foca em fazer dois Loops for
 * o primeiro para pular 2, assim so ficando com os Impares, nota que se pular
 * 1, so ira os pares :) O segundo FOR serve para realizar as operações
 * começando com 1,2,3,4,5,6....*/
