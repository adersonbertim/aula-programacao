#include <stdio.h>

int main() {
  char palavra[30]; // Array de 30 posições
  int i;            // i para o indice
  int contVog = 0;  // Contador de vogais
  printf("Digite uma palavra: ");
  scanf("%s", palavra);

  while (palavra[i] != '\0') {
    // While para comparar o indice da palavra até o final
    // If para verificar se tem vogal e depois caso tenha incrementando no
    // contador Depois o i++ para ir para a proxima letra
    if (palavra[i] == 'A' || palavra[i] == 'a' || palavra[i] == 'E' ||
        palavra[i] == 'e' || palavra[i] == 'I' || palavra[i] == 'i' ||
        palavra[i] == 'O' || palavra[i] == 'o' || palavra[i] == 'u' ||
        palavra[i] == 'U') {
      contVog++;
    }
    i++;
  }
  printf("A palavra tem um total de %d vogais", contVog);
}
