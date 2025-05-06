#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void filtro(int x, int y, int entrada[x][y], int saida[x][y]) {
  for (int i = 2; i < x - 2; i++) {
      for (int j = 2; j < y - 2; j++) {
          int soma = 0;
          for (int dx = -2; dx <= 2; dx++) {
              for (int dy = -2; dy <= 2; dy++) {
                  soma += entrada[i + dx][j + dy];
              }
          }
          saida[i][j] = soma / 25;
      }
  }

  // Zerar as bordas
  for (int i = 0; i < x; i++) {
      for (int j = 0; j < y; j++) {
          if (i < 2 || i >= x - 2 || j < 2 || j >= y - 2) {
            saida[i][j] = 0;
          }
      }
  }
}

int main() {
    int x, y;
    printf("Digite o tamanho da matriz [x y]: ");
    scanf("%d %d", &x, &y);

    // Matrizes com tamanho baseado na entrada
    int matriz_geral[x][y];
    int matriz_resul[x][y];

    // Inicializa gerador de números aleatórios
    srand(time(NULL));

    // Preencher matriz_geral com valores aleatórios
    printf("\nMatriz original:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            matriz_geral[i][j] = rand() % 256;
            printf("%3d ", matriz_geral[i][j]);
        }
        printf("\n");
    }

    // Aplicar o filtro de média
    filtro(x, y, matriz_geral, matriz_resul);

    // Mostrar a matriz final
    printf("\nMatriz após filtro de média 5x5 (bordas zeradas):\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%3d ", matriz_resul[i][j]);
        }
        printf("\n");
    }

    // Salvar em CSV
    FILE *arquivo = fopen("resultado.csv", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para salvar.\n");
        return 1;
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            fprintf(arquivo, "%d", matriz_resul[i][j]);
            if (j < y - 1)
                fprintf(arquivo, ",");
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
    printf("\nMatriz salva no arquivo 'resultado.csv'.\n");

    return 0;
}
