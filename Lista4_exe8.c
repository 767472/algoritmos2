#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int dia, mes, ano;
} Pessoa;

int cmp(Pessoa *a, Pessoa *b){
    if(a->ano != b->ano) return a->ano - b->ano;
    if(a->mes != b->mes) return a->mes - b->mes;
    return a->dia - b->dia;
}

int main() {
    Pessoa p, nova, velha;
    for(int i = 0; i < 6; i++){
        scanf(" %[^\n] %d/%d/%d",
              p.nome, &p.dia, &p.mes, &p.ano);
        if(i == 0){
            nova = velha = p;
        } else {
            if(cmp(&p, &nova) > 0)  nova = p;
            if(cmp(&p, &velha) < 0) velha = p;
        }
    }
    printf("Nova: %s\nVelha: %s\n", nova.nome, velha.nome);
    return 0;
}
