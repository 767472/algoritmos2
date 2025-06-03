#include <stdio.h>
#include <string.h>
struct Aluno {
  char nome[100];
  int matricula;
  float media_geral;

};
int main() {
  struct Aluno turma[2]; // Um pequeno array para exemplo
    strcpy(turma[0].nome, "Aluno Teste");
    turma[0].matricula = 2025002;
    turma[0].media_geral = 7.0;

    strcpy(turma[1].nome, "Aluno Teste 1");
    turma[1].matricula = 2025003;
    turma[1].media_geral = 7.5;

    for (int i = 0; i < 2; i++) {
        printf("Aluno %d: %s, Matrícula: %d\n",
            i + 1, turma[i].nome, turma[i].matricula);
    }
    return 0;
}
