
#include <stdio.h>

int main() {
    FILE*f=fopen("produtos.csv","w");
    if(f){
        fprintf(f,"codigo,descricao,preco\n");
        fclose(f);
    }
    return 0;
}
