#include <stdio.h>

int main() {
  int n, cont_pares = 0, cont_impares = 0, acm_par = 0, acm_impar = 0;
  printf("Digite uma quantidade de numeros: \n");

  while (1) {
    scanf("%d", &n);
    if (n == 0) {
      break;
    }
    if (n % 2 == 0) {
      cont_pares++;
      acm_par += n;
    } else {
      cont_impares++;
      acm_impar += n;
    }
  }
  double media_impares = 0.0;
  if (cont_impares != 0) {
    media_impares = (double)acm_impar / cont_impares;
  }
  printf("Quantidade de pares: %d\n", cont_pares);
  printf("Quantidade de impares: %d\n", cont_impares);
  printf("Total dos pares: %d\n", acm_par);
  printf("Média total dos impares: %.2f\n", media_impares);
  return 0;
}
