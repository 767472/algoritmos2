#include <stdio.h>

int ocorre(const char *s, const char *p) {
    const char *i, *j;
    for (; *s; s++) {
        for (i = s, j = p; *j && *i == *j; i++, j++);
        if (!*j) return 1;
    }
    return 0;
}

int main() {
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);
    printf("%c\n", ocorre(s1, s2) ? 'S' : 'N');
    return 0;
}
