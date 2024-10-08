#include <stdio.h>

int main() {
  int num = 10;
  printf("Local desse num %p\n", &num);
  printf("Tamanho da variavel %d\n", sizeof(num));

  int *ptr = &num;
  printf("Local do ponteiro %p\n", ptr);
  printf("Valor do endereço ponteiro %d\n", *ptr);
  printf("Valor do endereço ponteiro %d\n", ptr);
  printf("Tamanho da variavel %d\n", sizeof(ptr));
}
