#include <stdio.h>

int main() {
  int m, s;

  for (m = 5; m > 0; m--) {
    for (s = 59; s >= 0; s--) {
      printf("%d m %d s\n", m, s);
    }
  }
}
