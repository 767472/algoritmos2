
#include <stdio.h>

int main() {
    FILE*f=fopen("produtos.csv","r");
    char l[256];
    float p;
    fgets(l,sizeof l,f);
    while(fgets(l,sizeof l,f)){
        sscanf(l,"%*d,%*[^,],%f",&p);
        if(p<15) printf("%s",l);
    }
    fclose(f);
    return 0;
}
