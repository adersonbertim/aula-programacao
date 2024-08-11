#include <stdio.h>

int main() {
  int x, i;
  printf("A tabuada do 1 ao 5\n");
  for (x = 1; x < 6; x++) {
    for (i = 0; i < 11; i++) {
      printf("As tabuadas: %d X %d = %d\n", x, i, x * i);
    }
  }
  return 0;
}
