
#include <stdio.h>

int main() {
    int op;
    printf("1.Criar\n2.Incluir\n3.Sair\nEscolha: ");
    scanf("%d",&op);
    if(op==1){
        FILE*f=fopen("notas.csv","w");
        if(f){
            fprintf(f,"numero,nome,nota1,nota2\n");
            fclose(f);
        }
    }
    else if(op==2){
        FILE*f=fopen("notas.csv","a+");
        int num;
        char nome[50];
        float n1,n2;
        printf("Numero: "); scanf("%d",&num);
        printf("Nome: "); scanf(" %[^\n]",nome);
        printf("Nota1: "); scanf("%f",&n1);
        printf("Nota2: "); scanf("%f",&n2);
        fprintf(f,"%d,%s,%.2f,%.2f\n",num,nome,n1,n2);
        rewind(f);
        char l[256];
        fgets(l,sizeof l,f);
        while(fgets(l,sizeof l,f)){
            int nx; float a,b;
            char nm[50];
            sscanf(l,"%d,%49[^,],%f,%f",&nx,nm,&a,&b);
            printf("%d,%s,%.2f,%.2f, media: %.2f\n",nx,nm,a,b,(a+b)/2);
        }
        fclose(f);
    }
    return 0;
}
