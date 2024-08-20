#include <stdio.h>

int main() {
  int n1, n2, opc;

  printf("Digite qual operação deseja\n1."
         "Adição\n2.Subtração\n3.Multiplicação\n4.Divisão\n");
  scanf("%d", &opc);

  printf("Digite os numeros para a operação: \n");
  scanf("%d %d", &n1, &n2);
  switch (opc) {
  case 1:
    printf("A soma de %d + %d = %d", n1, n2, n1 + n2);
    break;
  case 2:
    printf("A subtração de %d - %d = %d", n1, n2, n1 - n2);
    break;
  case 3:
    printf("A multiplicação de %d x %d = %d", n1, n2, n1 * n2);
    break;
  case 4:
    printf("A divisão de %d / %d = %d", n1, n2, n1 / n2);
    break;
  default:
    printf("Digite um numero inteiro e valido por favor !!!");
    break;
  }

  return 0;
}

/* O programa precisa de 3 variaveis, uma para o numero 1, outra o numero 2 e de
 * opção Faça o usuario escolher a operação Depois da escolha ele digita o
 * numero das operações Então ele entra no switch case Cada opção tem seu
 * calculo, caso o usuario coloque um numero com virgula a operação se torna
 * invalida*/
