#include <stdio.h>
#include <stdlib.h>

void preencher(int *v, int n, int val) {
    int *p;
    for (p = v; p < v + n; p++) {
        *p = val;
    }
}

int main() {
    int n, val, i;
    scanf("%d %d", &n, &val);
    int *v = malloc(n * sizeof(int));
    if (!v) return 1;
    preencher(v, n, val);
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    free(v);
    return 0;
}
