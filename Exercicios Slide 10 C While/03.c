#include <stdio.h>

int main() {
  int x = 1, t;

  while (x <= 5) {
    printf("As tabuadas: %d\n", x);
    t = 1;
    while (t <= 10) {
      printf("Tabuada do %d X %d = %d\n", x, t, x * t);
      t++;
    };
    printf("\n");
    x++;
  }
}

/* São as cinco primeiras tabuadas
 * x que começa em 1 e t
 * vamos as tabuadas com o primeiro WHILE para a condição de que quando x for
 * MENOR ou IGUAL a 5 ele inicia t em 1 o segundo WHILE do T que enquanto for
 * menor ou igual a 10 ele printa valores 1x1,2,3 ate 10 depois o T acresce
 * depois de fechar o primeiro while o x acresce para chegar em 5 */
