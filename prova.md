#include <stdio.h>
#include <stdlib.h>

void salvarmatriz(int linha, int coluna, int matriz[linha][coluna]) {
    FILE *arquivo = fopen("matriz.csv", "w"); // Abre o arquivo para escrita
    if (!arquivo) { 
        printf("Erro ao criar o arquivo\n"); 
        return;
    } // Verifica se o arquivo foi aberto corretamente
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++){  
            fprintf(arquivo, "%d", matriz[i][j]); // Escreve o elemento da matriz no arquivo
            if(j < coluna - 1) // Verifica se não é o último elemento da linha
                fprintf(arquivo,","); // Adiciona vírgula entre os elementos
        }
        // Adiciona uma nova linha após cada linha da matriz        
        fprintf(arquivo, "\n");
    }
    fclose(arquivo); 
    printf("Arquivo criado com sucesso\n");  
}

int media(int linha, int coluna, int matriz[linha][coluna]) {
    int soma = 0; // Variável para armazenar a soma dos elementos
    for (int i = 0; i < linha; i++)  
        for (int j = 0; j < coluna; j++)  
            soma += matriz[i][j]; // Soma os elementos da matriz
    return soma / (linha * coluna); // Retorna a média
}

int moda(int linha, int coluna, int matriz[linha][coluna]) {
    int freq[256] = {0}; // Array para armazenar as frequências (0 a 255)
    int maior_freq = 0;  // Maior frequência encontrada
    int soma_modas = 0;  // Soma dos valores com maior frequência
    int qtd_modas = 0;   // Quantidade de valores com maior frequência
    // Conta as frequências de cada número na matriz
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            freq[matriz[i][j]]++;
        }
    }
    // Encontra a maior frequência e calcula a soma dos valores com essa frequência
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maior_freq) {
            maior_freq = freq[i];
            soma_modas = i; // Reinicia a soma com o novo valor
            qtd_modas = 1;  // Reinicia a contagem de valores com maior frequência
        } else if (freq[i] == maior_freq) {
            soma_modas += i; // Soma o valor com a mesma maior frequência
            qtd_modas++;     // Incrementa a contagem de valores com maior frequência
        }
    }
    // Retorna a média dos valores com maior frequência
    return soma_modas / qtd_modas;
}

int mediana(int linha, int coluna, int matriz[linha][coluna]) {
    int total = linha * coluna; // Total de elementos na matriz
    int vetor[total];           // Array unidimensional para armazenar os elementos da matriz
    int k = 0;
    // Copia os elementos da matriz para o array unidimensional
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            vetor[k++] = matriz[i][j];
        }
    }
    // Ordena o array usando Bubble Sort
    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    // Calcula a mediana
    if (total % 2 == 0) {
        // Se o número de elementos for par, retorna a média dos dois elementos centrais
        return (vetor[total / 2] + vetor[(total / 2) - 1]) / 2;
    } else {
        // Se o número de elementos for ímpar, retorna o elemento central
        return vetor[total / 2];
    }
}