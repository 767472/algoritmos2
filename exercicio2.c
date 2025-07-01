#include <stdio.h>
int main(){
    FILE *arquivo = fopen("Clintes.csv","r+");
    if(arquivo == NULL) return 0;
    char nome[100]="porra";
    for(int i=0;i<200;i++) fgets(nome,100,arquivo);
    scanf("%99[^'\n']",nome);
    fprintf(arquivo,"%s\n",nome);

    fclose(arquivo);
    return 0;
}