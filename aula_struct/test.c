#include <stdio.h>
#include <string.h>
// (Definições das structs Data e Aluno aqui)
int main() {
    // Definição da struct Data
struct Data {
  int dia;
  int mes;
  int ano;
};

// Definição da struct Aluno
struct Aluno {
  char nome[100];
  int matricula;
  float media_geral;
  struct Data data_nascimento;
};
    struct Aluno aluno1;

    strcpy(aluno1.nome, "Rogério Antoniassi");
    aluno1.matricula = 1234123;
    aluno1.media_geral = 7.5;
    aluno1.data_nascimento.dia = 22;
    aluno1.data_nascimento.mes = 9;
    aluno1.data_nascimento.ano = 2000;

    printf("Nome: %s\n", aluno1.nome);
    printf("Matrícula: %d\n", aluno1.matricula);
    printf("Data de Nascimento: %d/%d/%d\n",
        aluno1.data_nascimento.dia,
        aluno1.data_nascimento.mes,
        aluno1.data_nascimento.ano);

    return 0;
}
