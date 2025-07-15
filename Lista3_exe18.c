#include <stdio.h>
#include <stdlib.h>

int** multMatriz(int **A, int l1, int c1, int **B, int l2, int c2) {
    if (c1 != l2) return NULL;
    int **C = malloc(l1 * sizeof *C);
    for (int i = 0; i < l1; i++) {
        C[i] = calloc(c2, sizeof *C[i]);
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
    }
    return C;
}

int main() {
    int l1, c1, l2, c2;
    scanf("%d %d %d %d", &l1, &c1, &l2, &c2);
    int **A = malloc(l1 * sizeof *A);
    for (int i = 0; i < l1; i++)
        A[i] = malloc(c1 * sizeof *A[i]);
    int **B = malloc(l2 * sizeof *B);
    for (int i = 0; i < l2; i++)
        B[i] = malloc(c2 * sizeof *B[i]);
    for (int i = 0; i < l1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);
    for (int i = 0; i < l2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);
    int **C = multMatriz(A, l1, c1, B, l2, c2);
    if (!C) {
        printf("multiplicacao impossivel\n");
    } else {
        for (int i = 0; i < l1; i++) {
            for (int j = 0; j < c2; j++)
                printf("%d ", C[i][j]);
            printf("\n");
            free(C[i]);
        }
        free(C);
    }
    for (int i = 0; i < l1; i++) free(A[i]);
    for (int i = 0; i < l2; i++) free(B[i]);
    free(A); free(B);
    return 0;
}
