#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char autor[100];
    int ano_publicacao;
} LivroInfo;

// Função recebe um ponteiro para LivroInfo
void atualizarPrecoLivro(LivroInfo *livro, int novo_ano) {
    if (livro != NULL) { // Boa prática: verificar se o ponteiro não é nulo
        livro->ano_publicacao = novo_ano;
        // Exemplo: strcpy(livro->autor, "Autor Atualizado");
        printf("Informações do livro atualizadas dentro da função.\n");
    }
}

int main() {
    LivroInfo meu_livro = {"Programacao em C", "Autor Original", 2020};

    printf("Ano antes: %d\n", meu_livro.ano_publicacao);

    atualizarPrecoLivro(&meu_livro, 2024); // Passa o endereço da struct

    printf("Ano depois: %d\n", meu_livro.ano_publicacao);
    // printf("Autor depois: %s\n", meu_livro.autor); // Se alterado na função

    return 0;
}
