#include <stdio.h>

int main(){
    struct Aluno{
        int numero;
        char nome[50];
        int prova1;
        int prova2;
        int prova3;
    };    
    printf("%zu",sizeof(struct Aluno));
}