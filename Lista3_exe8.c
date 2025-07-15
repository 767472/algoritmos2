#include <stdio.h>
#include <stdlib.h>

int* criaVetor(int N) {
    if (N <= 0) return NULL;
    else
        return malloc(N * sizeof(int));
}

int main() {
    int N;
    printf("N: ");
    scanf("%d", &N);
    int *v = criaVetor(N);
    printf("%p\n", (void*)v);
    free(v);
    return 0;
}
