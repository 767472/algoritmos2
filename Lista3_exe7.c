#include <stdio.h>
#include <stdlib.h>

int* geraVetor(int N) {
    int *v = malloc(N * sizeof *v);
    for (int i = 0; i < N; i++)
        v[i] = i;
    return v;
}

int main() {
    int N;
    printf("N: "); scanf("%d", &N);
    int *v = geraVetor(N);
    for (int i = 0; i < N; i++)
        printf("%d ", v[i]);
    printf("\n");
    free(v);
    return 0;
}
