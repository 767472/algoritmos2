
#include <stdio.h>

int main() {
    FILE *arquivo = fopen("clientes.csv", "a");
    if (!arquivo) return 1;
    int cod;
    char nome[50], endr[100], fone[20];
    printf("Cod_Cli: "); scanf("%d", &cod);
    printf("Nome: ");   scanf(" %[^\n]", nome);
    printf("Endereco: "); scanf(" %[^\n]", endr);
    printf("Fone: ");   scanf(" %[^\n]", fone);
    fprintf(arquivo, "%d,%s,%s,%s\n", cod, nome, endr, fone);
    fclose(arquivo);
    return 0;
}
