#include <stdio.h>
int main() {
  int a[10][10], transposta[10][10], r, c;
  printf("Insira o número de linhas e colunas: ");
  scanf("%d %d", &r, &c);

  printf("\nDigite os valores da matriz:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Digite os números a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  printf("\nMatriz: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transposta[j][i] = a[i][j];
  }

  printf("\nMatriz Transposta:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transposta[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}
