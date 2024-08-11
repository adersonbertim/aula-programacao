#include <stdio.h>

int main() {
  int inicio = 0, segundo = 1, aux, i = 1;

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

/* Sequencia de fibonacci a soma de seus antecessores
 * As declarações de variaveis o Inicio com 0, Segundo com 1 e auxliar e i com 1
 * A sequencia iria ate o vigésimo termo
 * entra o Loop WHILE
 *  Enquanto i que começa em 1 pois tem que começar em 1 for menor que 20
 *  Ele imprime o INICIO
 *  ai começa a parte em que ficam trocando os valores
 *  auxiliar vai receber o INICIO + o segundo = aux = 0 + 1
 *  Inicio = Segundo == inicio passa a ser 1 e segundo passa a ficar "vazio"
 *  segundo = aux == "nada" recebe 1
 *  i++ == i incrementa 1
 *  e assim sempre somando ate chegar ao vigésimo termo */
