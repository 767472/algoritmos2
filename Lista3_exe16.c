#include <stdio.h>
#include <stdlib.h>

int* multMatVet(int **A, int *B, int N) {
    int *C = malloc(N * sizeof *C);
    for (int i = 0; i < N; i++) {
        C[i] = 0;
        for (int j = 0; j < N; j++)
            C[i] += A[i][j] * B[j];
    }
    return C;
}

int main() {
    int N; scanf("%d", &N);
    int **A = malloc(N * sizeof *A);
    for (int i = 0; i < N; i++)
        A[i] = malloc(N * sizeof *A[i]);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &A[i][j]);
    int *B = malloc(N * sizeof *B);
    for (int i = 0; i < N; i++) scanf("%d", &B[i]);
    int *C = multMatVet(A, B, N);
    for (int i = 0; i < N; i++) printf("%d ", C[i]);
    printf("\n");
    for (int i = 0; i < N; i++) free(A[i]);
    free(A); free(B); free(C);
    return 0;
}
