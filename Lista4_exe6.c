#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[100];
    float notas[3];
} Aluno;

int main() {
    Aluno a, melhor;
    float soma, med, melhorMed = -1;
    for(int i = 0; i < 5; i++){
        scanf("%d %[^\n]", &a.matricula, a.nome);
        soma = 0;
        for(int j = 0; j < 3; j++){
            scanf("%f", &a.notas[j]);
            soma += a.notas[j];
        }
        med = soma / 3;
        if(med > melhorMed){
            melhorMed = med;
            melhor = a;
        }
    }
    printf("Melhor: %s, notas: %.2f %.2f %.2f\n",
           melhor.nome,
           melhor.notas[0],
           melhor.notas[1],
           melhor.notas[2]);
    return 0;
}
