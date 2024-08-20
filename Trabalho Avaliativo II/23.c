#include <stdio.h>

int main() {
  int inicio = 0, segundo = 1, aux, i = 1;
  // Variaves , inicio, segundo termo, aux, e i para contagem

  printf("Sequencia de fibonacci até o vigésimo termo:\n");

  while (i < 20) {
    printf("%d", inicio);
    aux = inicio + segundo;
    inicio = segundo;
    segundo = aux;
    i++;
    printf("\n");
  }
}
// Para a contagem loop while
// enquanto o i for menor que 20
// sempre printa o primeiro termo que é o incio
// depois a troca e soma
// aux vai receber o incio + segundo
// e acresce um no i
