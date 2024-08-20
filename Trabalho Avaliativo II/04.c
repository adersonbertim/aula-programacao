#include <stdio.h>

int main() {
  float nota1, nota2, nota3, media;
  int alunos = 5, in = 1;
  while (in <= alunos) {
    printf("Digite as três notas em sequencia por favor: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    if (media > 7) {
      printf("O aluno foi aprovado com a media de: %.1f\n", media);
    } else {
      printf("O aluno foi reprovado com a media de: %.1f\n", media);
    }
    in++;
  }
}

/* A ideia era fazer parecido com a DEMO 1 nos slides das aulas
 * Entretanto tem um numero pre definido de alunos 5, assumindo que são 3 notas
 * e a media é 7. Usando a estrutura ENQUANTO, in = inicio, alunos = 5, ou seja
 * in 1, aluno 1, i++, in 2 aluno 2...... O calculo é bem simples apenas soma as
 * 3 notas e divide por 3 Uma estrutura de IF, com a aprovação e reprovação, por
 * fim o in++ da contagem, se não ele loopa infinito */
