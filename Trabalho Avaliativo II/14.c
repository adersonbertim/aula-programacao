#include <stdio.h>
#include <string.h> // Nova biblioteca, serve para manipular strings

int main() {
  char frase[100];
  int tamanho, i;

  printf("Digite uma frase ou palavra.\n");
  fgets(frase, sizeof(frase), stdin);
  frase[strcspn(frase, "\n")] = '\0';

  tamanho = strlen(frase);

  printf("O tamanho da frase ou palavra é: %d", tamanho);
}

/*Esse exercicio trabalha com funções para string
 * A primeira função mais importante e o tamanho da string, se fosse apenas para
 * uma palavra seria mais simples a função strlen serve para ler o tramanho da
 * string, nesse codigo a função mais importante Entretanto o exercicio exija
 * que seja uma frase Para isso sera necessario mais duas funções de String
 * fgets que serve para pegar todo o tamanho da string contanto os espaços e o
 * \n no final Essa função serve para ler toda string colocada no vetor e
 * armazena na string frase Depois vem a função de strcspn que serve para
 * retirar o nova linha colocada no final da frase.*/
