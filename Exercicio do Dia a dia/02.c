#include <stdio.h>
#include <string.h>

int main() {
  int t = 1, escolha, x, exc, i;
  // 't' controla o loop principal do programa.
  // 'escolha' guarda a opção selecionada pelo usuário no menu.
  // 'x' armazena a quantidade de produtos que o usuário deseja remover.
  // 'exc' guarda a posição do produto que o usuário deseja remover.
  // 'i' é usado para armazenar a posição onde o usuário deseja adicionar um
  // novo produto.

  int quant[20] = {0};
  char prod[20][20] = {{0}};
  // 'prod' é um array 2D que armazena os nomes dos produtos.
  // 'quant' é um array que armazena as quantidades de produtos nas 20 posições.
  // Inicializado com zero para indicar que inicialmente não há produtos em
  // estoque.

  while (t != 0) {

    printf("1. Adicionar\n");
    printf("2. Remover\n");
    printf("3. Visualizar estoque\n");
    printf("4. Sair\n");
    scanf("%d", &escolha);

    switch (escolha) {
    case 1:
      printf("Em qual posição deseja armazenar o produto?  1-20.\n");
      scanf("%d", &i);
      // Pergunta em qual posição (de 1 a 20) o usuário deseja adicionar o
      // produto.

      if (i < 1 || i > 20) {
        printf("Posição Invalida! Escolha entre 1 e 20\n");
        // Verifica se a posição escolhida é válida. Se não for, exibe uma
        // mensagem de erro e sai do case 1.
        break;
      }
      if (quant[i - 1] != 0) {
        printf("Local ocupado. Caso seja o mesmo produto adicione em "
               "quantidade ao existente!\n");
        printf("Desjea continuar:\n1. Sim \n2. Não");
        scanf("%d", &escolha);
        if (escolha == 2)
          break;
      }
      // Verifica se já existe um produto na posição escolhida. Se existir,
      // pergunta ao usuário se deseja continuar e adicionar mais unidades desse
      // produto.
      printf("Qual produto deseja adicionar? ");
      scanf("%s", prod[i - 1]);
      printf("Qual a quantia: ");
      scanf(" %d", &quant[i - 1]);
      break;

    case 2:
      printf("Qual a posição do produto que deseja retirar: 1-20. \n");
      scanf(" %d", &exc);

      if (exc < 1 || exc > 20) {
        printf("Posição Invalida! Escolha entre 1 e 20\n");
        break;
      }

      if (quant[exc - 1] > 0) {
        printf("Qual a quantia? ");
        scanf("%d", &x);
        if (x <= quant[exc - 1]) {
          quant[exc - 1] -= x;
          if (quant[exc - 1] == 0) {
            strcpy(prod[exc - 1], " ");
          }
        } else {
          printf("\nNão existe essa quantia para retirar!!!!\n");
        }
      } else {
        printf("Quantidade inexistente !!\n");
      }
      break;

    case 3:
      printf("Estoque atual no deposito:\n");
      for (int p = 0; p < 20; p++) {
        if (quant[p] > 0) {
          printf("%d lugar tem %d itens de %s\n", p + 1, quant[p], prod[p]);
        }
      }
      break;
    case 4:
      t = 0;
      break;

    default:
      printf("Opção invalida por favor use uma opção valida!\n");
      break;
    }
  }

  return 0;
}
