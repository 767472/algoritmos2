#include <stdio.h>
#include <stdlib.h>

int* vetorValor(int N, int val) {
    if (N <= 0) return NULL;
    int *v = malloc(N * sizeof *v);
    for (int i = 0; i < N; i++)
        v[i] = val;
    return v;
}

int main() {
    int N, val;
    scanf("%d %d", &N, &val);
    int *v = vetorValor(N, val);
    if (v) {
        for (int i = 0; i < N; i++)
            printf("%d ", v[i]);
        printf("\n");
    }
    free(v);
    return 0;
}
