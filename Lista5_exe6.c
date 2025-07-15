#include <stdio.h>

int main() {
    int v[5], i;
    for (i = 0; i < 5; i++) {
        scanf("%d", v + i);
    }
    for (i = 0; i < 5; i++) {
        if (*(v + i) % 2 == 0) {
            printf("%p\n", (void*)(v + i));
        }
    }
    return 0;
}
