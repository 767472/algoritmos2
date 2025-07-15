
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int cod;
    printf("Cod_Cli a excluir: ");
    scanf("%d", &cod);

    FILE *orig, *temp;
    char linha[256];
    int x;

    // clientes.csv
    orig = fopen("clientes.csv","r");
    temp = fopen("temp.csv","w");
    fgets(linha,sizeof linha,orig);
    fprintf(temp,"%s",linha);
    while(fgets(linha,sizeof linha,orig)){
        sscanf(linha,"%d,",&x);
        if(x!=cod) fprintf(temp,"%s",linha);
    }
    fclose(orig); fclose(temp);
    remove("clientes.csv");
    rename("temp.csv","clientes.csv");

    // recebimentos.csv
    orig = fopen("recebimentos.csv","r");
    temp = fopen("temp.csv","w");
    fgets(linha,sizeof linha,orig);
    fprintf(temp,"%s",linha);
    while(fgets(linha,sizeof linha,orig)){
        // último campo é Cod_Cli
        char *p = strrchr(linha, ',');
        if(p && atoi(p+1)!=cod) fprintf(temp,"%s",linha);
    }
    fclose(orig); fclose(temp);
    remove("recebimentos.csv");
    rename("temp.csv","recebimentos.csv");

    return 0;
}
