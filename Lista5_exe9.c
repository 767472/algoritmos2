#include <stdio.h>
#include <stdlib.h>

void imprimir(int *v, int n) {
    int *p;
    for (p = v; p < v + n; p++) {
        printf("%d ", *p);
    }
    printf("\n");
}

int main() {
    int n, i;
    scanf("%d", &n);
    int *v = malloc(n * sizeof(int));
    if (!v) return 1;
    for (i = 0; i < n; i++) {
        scanf("%d", v + i);
    }
    imprimir(v, n);
    free(v);
    return 0;
}
