#include <stdio.h>

int main() {
  int ch;

  printf("Para escolher seu estado civil digite.\n1. C\n2. S\n3. D\n4. V\n "
         "Qual Opção: ");
  scanf("%d", &ch);

  switch (ch) {
  case 1:
    printf("Casado");
    break;
  case 2:
    printf("Solteiro");
    break;
  case 3:
    printf("Divorciado");
    break;
  case 4:
    printf("Viuvo");
    break;
  default:
    printf("Opção Invalida!!!");
  }
}
