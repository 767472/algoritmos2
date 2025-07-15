
#include <stdio.h>
#include <string.h>

int main() {
    int cod, x;
    char nome[50], endr[100], fone[20], linha[256];
    printf("Cod_Cli a alterar: ");
    scanf("%d", &cod);

    FILE *orig = fopen("clientes.csv","r");
    FILE *temp = fopen("temp.csv","w");
    fgets(linha,sizeof linha,orig);
    fprintf(temp,"%s",linha);
    while(fgets(linha,sizeof linha,orig)){
        sscanf(linha,"%d,",&x);
        if(x==cod) {
            printf("Novo Nome: ");   scanf(" %[^\n]", nome);
            printf("Novo Endereco: "); scanf(" %[^\n]", endr);
            printf("Novo Fone: ");   scanf(" %[^\n]", fone);
            fprintf(temp,"%d,%s,%s,%s\n",cod,nome,endr,fone);
        } else {
            fprintf(temp,"%s",linha);
        }
    }
    fclose(orig); fclose(temp);
    remove("clientes.csv");
    rename("temp.csv","clientes.csv");
    return 0;
}
