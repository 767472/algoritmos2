#include <stdio.h>

int main() {
    FILE *arquivo = fopen("clientes.csv", "w");
    if (arquivo) {
        fprintf(arquivo, "Cod_Cli,Nome,Endereco,Fone\n");
        fclose(arquivo);
    }

    FILE *arquivo2 = fopen("recebimentos.csv", "w");
    if (arquivo2) {
        fprintf(arquivo2, "Num_doc,Valor_doc,Data_Emissao,Data_Vencimento,Cod_Cli\n");
        fclose(arquivo2);
    }

    return 0;
}
