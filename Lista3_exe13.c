#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int **m = malloc(N * sizeof *m);
    for (int i = 0; i < N; i++) {
        m[i] = malloc(N * sizeof *m[i]);
        for (int j = 0; j < N; j++) {
            if (i == j) m[i][j] = 0;
            else if (j > i) m[i][j] = 1;
            else m[i][j] = -1;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", m[i][j]);
        printf("\n");
        free(m[i]);
    }
    free(m);
    return 0;
}
