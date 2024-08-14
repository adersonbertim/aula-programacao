#include <stdio.h>

int main() {
  int n;
  printf("Qual tamanho do quadrado: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("# ");
    }
    printf("\n");
  }
}
/* Pegamos do usuario um numero no qual informado remete o tamanho do quadrado a
 * ser criado I representa as linhas J as colunas
 */
