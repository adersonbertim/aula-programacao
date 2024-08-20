#include <stdio.h>
#include <string.h>

void ordenarString(char str[]) { // Função para ordenar a string usando o
                                 // algoritmo de Buble Sort
  int n = strlen(str);
  char temp;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (str[i] > str[j]) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
}

int main() {
  char palavra1[50], palavra2[50];
  printf("Digite a primeira palavra: ");
  fgets(palavra1, sizeof(palavra1), stdin); // Entrada das palavras
  printf("Digite a segunda palavra: ");
  fgets(palavra2, sizeof(palavra2), stdin);

  palavra1[strcspn(palavra1, "\n")] = '\0'; // Excluindo o nulo
  palavra2[strcspn(palavra2, "\n")] = '\0';

  ordenarString(palavra1);
  ordenarString(palavra2);

  if (strcmp(palavra1, palavra2) == 0) { // Comparando as palavras ordenadas
    printf("As palavras são anagramas.\n");
  } else {
    printf("As palavras não são anagramas.\n");
  }
}
