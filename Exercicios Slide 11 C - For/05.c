#include <stdio.h>

int main() {
  int p, a, b;

  for (a = 1; a <= 6; a++) {
    for (b = 1; b <= 6; b++) {
      p = a + b;
      if (p == 7) {
        printf("%d + %d = %d \n", a, b, p);
      }
    }
  }
}
/* Esse era para verificar as possibilidades de dois dados cairem com o
 * resultado sete São realizados dois loops FOR um para o dado 1 e outro dado 2
 * Depois e realizado a operação de probabilidade...
 * Dentro do IF quando o resultado for IGUAL a 7 ele printa na tela.
 */
