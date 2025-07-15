#include <stdio.h>
#include <stdlib.h>

int** diagPrincipal(int N) {
    int **m = malloc(N * sizeof *m);
    for (int i = 0; i < N; i++) {
        m[i] = calloc(N, sizeof *m[i]);
        m[i][i] = 1;
    }
    return m;
}

int main() {
    int N;
    scanf("%d", &N);
    int **m = diagPrincipal(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", m[i][j]);
        printf("\n");
        free(m[i]);
    }
    free(m);
    return 0;
}
