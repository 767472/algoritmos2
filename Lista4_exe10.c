#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    char esporte[50];
    int idade;
    float altura;
} Atleta;

void troca(Atleta *a, Atleta *b){
    Atleta t = *a;
    *a = *b;
    *b = t;
}

int main() {
    Atleta v[5];
    for(int i = 0; i < 5; i++){
        scanf(" %[^\n] %[^\n] %d %f",
              v[i].nome, v[i].esporte,
              &v[i].idade, &v[i].altura);
    }
    for(int i = 0; i < 5; i++)
        for(int j = i+1; j < 5; j++)
            if(v[j].idade > v[i].idade)
                troca(&v[i], &v[j]);

    for(int i = 0; i < 5; i++)
        printf("%s %d %s %.2f\n",
               v[i].nome, v[i].idade,
               v[i].esporte, v[i].altura);
    return 0;
}
