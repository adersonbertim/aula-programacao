#include <stdio.h>

int main() {
  int x, i;
  printf("A tabuada do 1 ao 5\n");
  for (x = 1; x < 6; x++) {
    for (i = 0; i < 11; i++) {
      printf("As tabuadas: %d X %d = %d\n", x, i, x * i);
    }
  }
  return 0;
}
/* Ele faz direto da tabuada do 1 ao 5
 * O primeiro loop FOR serve para passar do 1 ao 5...
 * O segundo loop FOR serve para ir multiplicando do 1 ao 10
 * Depois finalmente executando a multiplicação na função printf
 */
