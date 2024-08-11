#include <stdio.h>

int main() {
  int x, n = 0;
  printf("Digite qual tabuada deseja saber: ");
  scanf("%d", &x);

  while (n <= 10) {
    printf("Tabuada do %d X %d = %d \n", x, n, x * n);
    n++;
  };
}
