#include <stdio.h>

int main() {
    int a, b;
    if (&a > &b)
        printf("%p\n", (void*)&a);
    else
        printf("%p\n", (void*)&b);
    return 0;
}
