#include <stdio.h>
#include <stdlib.h>

void salvarmatriz(int linha, int coluna, int matriz[linha][coluna]) {
    FILE *arquivo = fopen("matriz.csv", "w");
    if (!arquivo) { printf("Erro ao criar o arquivo\n"); return; }
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) 
            fprintf(arquivo, "%d%s", matriz[i][j], (j < coluna - 1) ? "," : "");
        fprintf(arquivo, "\n");
    }
    fclose(arquivo);
    printf("Arquivo criado com sucesso\n");
}

int media(int linha, int coluna, int matriz[linha][coluna]) {
    int soma = 0;
    for (int i = 0; i < linha; i++) 
        for (int j = 0; j < coluna; j++) 
            soma += matriz[i][j];
    return soma / (linha * coluna);
}

int moda(int linha, int coluna, int matriz[linha][coluna]) {
    int freq[10] = {0}, moda = 0, maior_freq = 0; // Supondo valores entre 0 e 9
    for (int i = 0; i < linha; i++) 
        for (int j = 0; j < coluna; j++) 
            freq[matriz[i][j]]++;
    for (int i = 0; i < 10; i++) 
        if (freq[i] > maior_freq) { maior_freq = freq[i]; moda = i; }
    return moda;
}

int mediana(int linha, int coluna, int matriz[linha][coluna]) {
    int total = linha * coluna, vetor[total], k = 0;
    for (int i = 0; i < linha; i++) 
        for (int j = 0; j < coluna; j++) 
            vetor[k++] = matriz[i][j];
    for (int i = 0; i < total - 1; i++) 
        for (int j = 0; j < total - i - 1; j++) 
            if (vetor[j] > vetor[j + 1]) { int aux = vetor[j]; vetor[j] = vetor[j + 1]; vetor[j + 1] = aux; }
    return (total % 2 == 0) ? (vetor[total / 2] + vetor[total / 2 - 1]) / 2 : vetor[total / 2];
}