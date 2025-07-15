
#include <stdio.h>
#include <string.h>

int main() {
    int op;
    printf("1- estacao\n2- estilista\n3- roupa\n4- relatorio\nEscolha: ");
    scanf("%d",&op);

    if(op==1){
        FILE*f=fopen("estacao.csv","a");
        int cod; char nome[50];
        printf("Cod: "); scanf("%d",&cod);
        printf("Nome: "); scanf(" %[^\n]",nome);
        fprintf(f,"%d,%s\n",cod,nome);
        fclose(f);
    }
    else if(op==2){
        FILE*f=fopen("estilista.csv","a");
        int cod; char nome[50]; float sal;
        printf("Cod: "); scanf("%d",&cod);
        printf("Nome: "); scanf(" %[^\n]",nome);
        printf("Salario: "); scanf("%f",&sal);
        fprintf(f,"%d,%s,%.2f\n",cod,nome,sal);
        fclose(f);
    }
    else if(op==3){
        FILE*f=fopen("roupa.csv","a");
        int codR,codE,codS,ano;
        char desc[100];
        printf("Cod roupa: "); scanf("%d",&codR);
        printf("Desc: "); scanf(" %[^\n]",desc);
        printf("Cod est: "); scanf("%d",&codE);
        printf("Cod estac: "); scanf("%d",&codS);
        printf("Ano: "); scanf("%d",&ano);
        fprintf(f,"%d,%s,%d,%d,%d\n",codR,desc,codE,codS,ano);
        fclose(f);
    }
    else if(op==4){
        int estBus;
        printf("Cod estacao: "); scanf("%d",&estBus);
        FILE*sr=fopen("roupa.csv","r");
        FILE*se=fopen("estilista.csv","r");
        char l[256];
        fgets(l,sizeof l,sr);
        while(fgets(l,sizeof l,sr)){
            int cr,ce,cs,ano; char desc[100];
            sscanf(l,"%d,%99[^,],%d,%d,%d",&cr,desc,&ce,&cs,&ano);
            if(cs==estBus){
                rewind(se); fgets(l,sizeof l,se);
                while(fgets(l,sizeof l,se)){
                    int c; char nome[50];
                    sscanf(l,"%d,%49[^,],",&c,nome);
                    if(c==ce){
                        printf("%s | %s | %d\n", desc, nome, ano);
                        break;
                    }
                }
            }
        }
        fclose(sr); fclose(se);
    }
    return 0;
}
