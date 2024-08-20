#include <stdio.h>

int main() {
  int i, n;

  for (i = 0; i <= 5; i++) {
    for (n = 0; n <= 10; n++) {
      printf(" %d  x  %d  =  %d \n\n", i, n, i * n);
    }
  }
}
