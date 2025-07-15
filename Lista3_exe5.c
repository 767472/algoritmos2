#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    do {
        printf("N (>=0): ");
        scanf("%d", &N);
    } while (N < 0);
    int *v = malloc(N * sizeof *v);
    for (int i = 0; i < N; i++) {
        do {
            printf("v[%d] (>=2): ", i);
            scanf("%d", &v[i]);
        } while (v[i] < 2);
    }
    free(v);
    return 0;
}
