
#include <stdio.h>

int main() {
    FILE *e=fopen("estilista.csv","w");
    FILE *r=fopen("roupa.csv","w");
    FILE *s=fopen("estacao.csv","w");
    if(e){
      fprintf(e,"cod_estilista,nome_estilista,salario\n");
      fclose(e);
    }
    if(r){
      fprintf(r,"cod_roupa,desc_roupa,cod_estilista,cod_estacao,ano\n");
      fclose(r);
    }
    if(s){
      fprintf(s,"cod_estacao,nome_estacao\n");
      fclose(s);
    }
    return 0;
}
