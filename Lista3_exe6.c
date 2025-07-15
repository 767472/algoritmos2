#include <stdio.h>
#include <stdlib.h>

int existe(int **m, int linhas, int colunas, int x) {
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            if (m[i][j] == x) return 1;
    return 0;
}

int main() {
    int l, c, valor;
    printf("Linhas: "); scanf("%d", &l);
    printf("Colunas: "); scanf("%d", &c);
    int **m = malloc(l * sizeof *m);
    for (int i = 0; i < l; i++)
        m[i] = malloc(c * sizeof *m[i]);
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    printf("Valor a buscar: "); scanf("%d", &valor);
    printf("%d\n", existe(m, l, c, valor));
    for (int i = 0; i < l; i++) free(m[i]);
    free(m);
    return 0;
}
