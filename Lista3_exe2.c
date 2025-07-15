#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[100];
    float notas[3];
};

int main() {
    printf("tamanho struct Aluno: %zu bytes\n", sizeof(struct Aluno));
    return 0;
}
