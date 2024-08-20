#include <stdio.h>

int main() {
  int n;
  printf("Qual tamanho de contagem ? ");
  scanf("%d", &n);
  for (int j = 0; j <= n;
       j++) { // Primeiro loop para imprimir as linhas corretamente
    for (int i = 1; i <= j;
         i++) { // Aumenta as impressões nas linhas conforme passa.
      printf("%d", i);
    }
    printf("\n");
  }
}
