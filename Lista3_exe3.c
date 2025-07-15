#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cadastro {
    char nome[100];
    int idade;
    char endereco[150];
};

struct Cadastro* criaCadastro(int N) {
    struct Cadastro *v = malloc(N * sizeof *v);
    for (int i = 0; i < N; i++) {
        printf("Nome: ");    scanf(" %[^\n]", v[i].nome);
        printf("Idade: ");   scanf("%d", &v[i].idade);
        printf("Endereco: ");scanf(" %[^\n]", v[i].endereco);
    }
    return v;
}

int main() {
    int N;
    printf("Quantidade: "); scanf("%d", &N);
    struct Cadastro *vet = criaCadastro(N);
    free(vet);
    return 0;
}
