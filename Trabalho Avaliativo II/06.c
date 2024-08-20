#include <stdio.h>

int main() {
  int fat = 1, j, n;
  printf("Digite um numero para saber seu fatorial: ");
  scanf("%d", &n);
  if (n < 0) {
    printf("Não existe fatorial de numero negativo");
  } else {
    for (j = 1; j <= n; j++) {
      fat *= j;
    }
    printf("O fatorial do numero e: %d", fat);
  }
}

/* Esse é o algoritmo de fatorial
 * São declaradas 3 variaveis, FAT para fatorial, j como uma variavel para o
 * loop for e N para armazenar o numero do usuario
 * Depois do usuario colocar entra em um if, verificando se esse numero é menor
 * que zero se passar do if ele entra no else, com um loop for Loop FOR, começa
 * com o j = 1, e enquanto o j for menor ou igual ao numero do usuario o j é
 * somado depois o calculo de fatorial, como ele começa com 1, ele é
 * multiplicado por j, ja que é o valor que esta dentro do loop, sendo menor que
 * n, esse numero é armazenado e multiplicado Por fim, o fatorial, fica
 * armazendo todas as multiplicações sendo assim: n = 5 J = 1, j < 5, J++ fat(1)
 * * 5 => 5(loop refeito) fat(5) * 4 = 20; e assim ate chegar em 1. */
