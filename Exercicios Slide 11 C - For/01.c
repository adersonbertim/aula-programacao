#include <stdio.h>

int main() {
  int num, i;
  printf("Digite de qual tabuada precisa saber: \n");
  scanf("%d", &num);
  for (i = 0; i < 11; i++) {
    printf("A tabuada de %d X %d = %d\n", num, i, num * i);
  }
  return 0;
}
