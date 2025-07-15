
#include <stdio.h>
#include <string.h>

int main() {
    int codCli, numDoc;
    float valor;
    char dEmi[11], dVen[11];
    printf("Num_doc: ");             scanf("%d", &numDoc);
    printf("Valor_doc: ");           scanf("%f", &valor);
    printf("Data_Emissao: ");        scanf(" %[^\n]", dEmi);
    printf("Data_Vencimento: ");     scanf(" %[^\n]", dVen);
    printf("Cod_Cli: ");             scanf("%d", &codCli);

    FILE *cli = fopen("clientes.csv","r");
    int achou=0, tmp;
    char linha[256];
    fgets(linha, sizeof linha, cli);             // pula header
    while(fgets(linha,sizeof linha,cli)){
        sscanf(linha,"%d,", &tmp);
        if(tmp==codCli){ achou=1; break; }
    }
    fclose(cli);
    if(!achou) {
        printf("Cliente nao cadastrado\n");
        return 0;
    }

    FILE *rec = fopen("recebimentos.csv","a");
    if(!rec) return 1;
    fprintf(rec,"%d,%.2f,%s,%s,%d\n",
            numDoc, valor, dEmi, dVen, codCli);
    fclose(rec);
    return 0;
}
