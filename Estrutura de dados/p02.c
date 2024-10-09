#include <stdio.h>

int main() {
  int x = 10;
  int *pi;

  pi = &x;
  (*pi)++;
  printf("%d", x);
}
