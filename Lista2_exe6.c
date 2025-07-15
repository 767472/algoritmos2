
#include <stdio.h>
#include <string.h>

int main() {
    int numDoc, codCli, tmpDoc, tmpCli;
    float valor;
    char dEmi[11], dVen[11], linha[256];

    printf("Num_doc: "); scanf("%d", &numDoc);
    printf("Cod_Cli: "); scanf("%d", &codCli);

    FILE *orig = fopen("recebimentos.csv","r");
    FILE *temp = fopen("temp.csv","w");
    fgets(linha,sizeof linha,orig);
    fprintf(temp,"%s",linha);
    while(fgets(linha,sizeof linha,orig)){
        sscanf(linha,"%d,%*f,%10[^,],%10[^,],%d",
               &tmpDoc, dEmi, dVen, &tmpCli);
        if(tmpDoc==numDoc && tmpCli==codCli){
            printf("Novo Valor_doc: "); scanf("%f", &valor);
            printf("Nova Data_Emissao: "); scanf(" %[^\n]", dEmi);
            printf("Nova Data_Vencimento: "); scanf(" %[^\n]", dVen);
            fprintf(temp,"%d,%.2f,%s,%s,%d\n",
                    numDoc, valor, dEmi, dVen, codCli);
        } else {
            fprintf(temp,"%s",linha);
        }
    }
    fclose(orig); fclose(temp);
    remove("recebimentos.csv");
    rename("temp.csv","recebimentos.csv");
    return 0;
}
