#include <stdio.h>

int main() {
  int idade, ano, atual;
  printf("Qual o ano de seu nascimento: ");
  scanf("%d", &ano);
  printf("Qual o ano atual: ");
  scanf("%d", &atual);

  idade = atual - ano;
  printf("Sua idade é %d !", idade);
}
