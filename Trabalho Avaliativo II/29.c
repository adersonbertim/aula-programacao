#include <stdio.h>

int main() {
  int t;
  float n1, n2, media, mediaT = 0;

  printf("Qual o tamanho da turma: ");
  scanf("%d", &t); // Pega o tamanho da turma

  while (t > 0) { // Loop de while para enquanto t for maior que 0
    printf("Digite a nota 1 e a nota 2 do aluno: \n");
    scanf("%f %f", &n1, &n2); // Usuario digita a nota do aluno
    media = (n1 + n2) / 2;
    printf("A média desse aluno com a nota de %.1f e %.1f é: %.1f\n", n1, n2,
           media); // A nota ja é impressa com media do respectivo aluno
    mediaT = media / t;
    t--; // Loop diminuindo
  }
  printf("A media da turma: %.1f", mediaT);
}
