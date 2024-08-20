#include <stdio.h>

int main() {
  int i, n, contaPar = 0, contaImpar = 0;

  for (n = 1; n <= 10;
       n++) { // vai loopando ate ter pegado os 10 numeros do usuario
    printf("Digite um numero: ");
    scanf("%d", &i);
    if (i % 2 == 0) { // Divide por 2, se o resto for 0 incrementa par
      contaPar++;
    } else {
      contaImpar++;
    }
  }
  printf("O total de par é %d.\nO total de impares é %d.", contaPar,
         contaImpar);
}
