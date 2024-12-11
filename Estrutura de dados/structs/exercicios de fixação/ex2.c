#include <stdio.h>

typedef struct {
  int x;
  int y;
} Ponto;

typedef struct {
  Ponto pt1;
  Ponto pt2;
  Ponto pt3;
} Triangulo;

int main() {
  Triangulo triangulo;

  triangulo.pt1.x = 1;
  triangulo.pt2.x = -1;
  triangulo.pt3.x = 0;
  triangulo.pt1.y = 0;
  triangulo.pt2.y = 0;
  triangulo.pt3.y = 1;

  printf("Ponto 1: (%d, %d)\n", triangulo.pt1.x, triangulo.pt1.y);
  printf("Ponto 2: (%d, %d)\n", triangulo.pt2.x, triangulo.pt2.y);
  printf("Ponto 3: (%d, %d)\n", triangulo.pt3.x, triangulo.pt3.y);

  return 0;
}
