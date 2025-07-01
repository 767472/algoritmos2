#include <stdio.h>
int main(){
FILE *arquivo = fopen("Clintes.csv","w");
if(arquivo == NULL) return 0;
fprintf(arquivo,"Cod_Cli, Nome, Endereco, Fone");
fclose(arquivo);
FILE *arquivo2 = fopen("Recebimentos.csv","w");
if(arquivo2 == NULL) return 0;
fprintf(arquivo2,"Num_doc, Valor_doc, Data_Emissao, Data_Vencimento, Cod_Cli");
fclose(arquivo2);
return 0;
}