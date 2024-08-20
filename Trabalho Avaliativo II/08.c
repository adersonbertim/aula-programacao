#include <stdio.h>

int main() {
  int num, pares = 0, impares = 0;

  for (int i = 1; i <= 10; i++) {
    printf("Digite um numero: \n");
    scanf("%d", &num);
    if (num % 2 == 0) {
      pares++;
    } else {
      impares++;
    }
  }
  printf("A quantidade total de pares é: %d \nE a quantidade de impares é: %d",
         pares, impares);
}

/* Algoritmo bem simples
 * Precisa de 4 variaveis, uma para o numero do usuario, outra para o loop for
 * As outras duas sao como contadores, dos pares e impares
 * O for serve pra pedir pro usuario 10 numeros, no momento que eles são lidos
 * ele entra no if Se o resto de divisão for 2 ele é par caso contrario impar
 * Printf no final dando a soma total de pares e impares*/
