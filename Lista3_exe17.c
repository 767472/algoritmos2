#include <stdio.h>
#include <stdlib.h>

int* somaColunas(int **A, int N) {
    int *B = calloc(N, sizeof *B);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            B[j] += A[i][j];
    return B;
}

int main() {
    int N; scanf("%d", &N);
    int **A = malloc(N * sizeof *A);
    for (int i = 0; i < N; i++)
        A[i] = malloc(N * sizeof *A[i]);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &A[i][j]);
    int *B = somaColunas(A, N);
    for (int i = 0; i < N; i++) printf("%d ", B[i]);
    printf("\n");
    for (int i = 0; i < N; i++) free(A[i]);
    free(A); free(B);
    return 0;
}
