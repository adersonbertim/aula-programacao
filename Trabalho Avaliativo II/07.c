#include <stdio.h>

int main() {
  int n, i, t1 = 0, t2 = 1, proxTermo;
  printf("Digite qual termo de Fibonacci deseja saber: soma");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    printf("%d \n", t1);
    proxTermo = t1 + t2;
    t1 = t2;
    t2 = proxTermo;
  }
}

/* A sequencia de Fibonacci consiste em pegar o termo anterior e somar para
 * obter o proximo, os primeiros termos sao 0 e 1 Com isso em mente precisa de 5
 * variaves
 * 1. N = numero do usuario
 * 2. I = variavel do loop
 * 3. t1 = Começando com o primeiro termo da sequencia
 * 4. t2 = Segundo termo da sequencia
 * 5. Proximo Termo = variaves para adicionar o proximo termo
 *
 * Depois de coletar o numero do usuario, por exemplo 5;
 * O loop começa com, i =1; i <= 5; i++
 * Ele printa o termo 0 e depois ele entra na troca de variaveis
 * proxTermo vai receber a soma de 0 + 1;
 * t1 vai receber t2
 * t2 vai receber o proximo termo que no caso esta em 1
 * e assim vai recomeçar o loop, agora com 1, depois 2, depois com 3*/
