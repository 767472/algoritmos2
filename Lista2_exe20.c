
#include <stdio.h>

int main() {
    char letra='M';
    FILE*f=fopen("produtos.csv","r");
    char l[256], d[50];
    fgets(l,sizeof l,f);
    while(fgets(l,sizeof l,f)){
        sscanf(l,"%*d,%49[^,],%*f",d);
        if(d[0]==letra) printf("%s",l);
    }
    fclose(f);
    return 0;
}
