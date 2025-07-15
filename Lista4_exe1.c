#include <stdio.h>

typedef struct {
    char nome[100];
    int idade;
    char endereco[150];
} Pessoa;

int main() {
    Pessoa p;
    printf("Nome: ");    scanf(" %[^\n]", p.nome);
    printf("Idade: ");   scanf("%d", &p.idade);
    printf("Endereco: ");scanf(" %[^\n]", p.endereco);
    printf("Nome: %s\nIdade: %d\nEndereco: %s\n",
           p.nome, p.idade, p.endereco);
    return 0;
}
