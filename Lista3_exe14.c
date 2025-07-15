#include <stdio.h>
#include <stdlib.h>

int* somaVetores(int *A, int *B, int N) {
    int *C = malloc(N * sizeof *C);
    for (int i = 0; i < N; i++)
        C[i] = A[i] + B[i];
    return C;
}

int main() {
    int N;
    scanf("%d", &N);
    int *A = malloc(N * sizeof *A);
    int *B = malloc(N * sizeof *B);
    for (int i = 0; i < N; i++) scanf("%d", &A[i]);
    for (int i = 0; i < N; i++) scanf("%d", &B[i]);
    int *C = somaVetores(A, B, N);
    for (int i = 0; i < N; i++) printf("%d ", C[i]);
    printf("\n");
    free(A); free(B); free(C);
    return 0;
}
