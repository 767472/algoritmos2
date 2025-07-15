#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char esporte[50];
    int idade;
    float altura;
} Atleta;

int main() {
    Atleta a, maisAlto, maisVelho;
    for(int i = 0; i < 5; i++){
        scanf(" %[^\n] %[^\n] %d %f",
              a.nome, a.esporte, &a.idade, &a.altura);
        if(i == 0){
            maisAlto = maisVelho = a;
        } else {
            if(a.altura > maisAlto.altura)
                maisAlto = a;
            if(a.idade > maisVelho.idade)
                maisVelho = a;
        }
    }
    printf("Mais alto: %s\nMais velho: %s\n",
           maisAlto.nome, maisVelho.nome);
    return 0;
}
