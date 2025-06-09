#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50
#define MAX_SOBRENOME 50
#define ARQUIVOS_CSV "dados.cvs"
#define TAMANHO 256

typedef struct{
    char nome[MAX_NOME];
    char sobrenome[MAX_SOBRENOME];
} Pessoa;

/*Prototipos ou assinatura das funções*/

void criarArquivos(void);
void inserirDados(void);
void buscarDados(void);
void removerDados(void);
void listarRegistros(void);
void exibirMenu(void);
void limparBuffer(void);

void limparBuffer(void){
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
}

void criarArquivos(void){
    FILE *arquivo = fopen{ARQUIVOS_CSV, "w"};
    if(arquivo == NULL){
        printf("Erro ao criar arquivo \n");
        return;
    }
    fprintf(arquivo, "nome,sobrenome\n");
    fclose(arquivo);
    printf("arquivo criado com sucesso");
}

void inserirDados(void){
    FILE *arquivo = fopen(ARQUIVOS_CSV, "a");
    if(arquivo == NULL){
        printf("Erro ao criar arquivo \n");
        return;
    }
    Pessoa pessoa;
    printf("Digite o nome: ");
    scanf("%s",pessoa.nome);
    limparBuffer();

    printf("Digite o sobrenome: ");
    scanf("%s", pessoa.sobrenome);
    limparBuffer();

    fprintf (arquivo, "%s,%s\n, pessoa.nome, pessoa.sobrenome");
    fclose(arquivo);
    printf("Dados inseridos com sucesso");
}

void buscarDados(void){
    FILE *arquivo = fopen(ARQUIVOS_CSV, "r");
    if(arquivo == NULL){
        printf("Erro ao criar arquivo \n");
        return;
    }
    char nomeBusca[MAX_NOME];
    printf("Digite o nome para buscar: ");
    scanf("%s",nomeBusca);
    limparBuffer();

    char cabecalho[TAMANHO];
    fscanf(arquivo, "%[^\n]\n",cabecalho);
    //% = ler uma sequencia, [^\n] buscar até achar um \n, \n para passar para a proxima linha

    int encontrado = 0;
    char nome[MAX_NOME], sobrenome[MAX_SOBRENOME];

    while (fscanf(arquivo, "%[^,],%[^\n]\n",nome,sobrenome) == 2) {
        // fscanf retorna a quantidade de % q foi possivel ler
        if(strcmp(nome, nomeBusca)==0){
            printf("Encontrado: %s %s\n",nome, sobrenome);
            encontrado = 1;
        }
    }

    if(!encontrado){
        printf("Nome não encontrado!\n");
    }
    fclose(arquivo);
}

void removerDados(void){

    FILE *arquivo = fopen(ARQUIVOS_CSV, "r");
    if(arquivo == NULL){
        printf("Erro ao criar arquivo \n");
        return;
    }
    FILE *temp = fopen("temp.csv","w");
    if(temp == NULL){
        printf("Erro ao criar arquivo temporario \n");
        return;
    }

}

void listarRegistros(void){
    FILE *arquivo = fopen(ARQUIVOS_CSV, "r");
    if(arquivo == NULL){
        printf("Erro ao criar arquivo \n");
        return;
    }

    int contador = 0; 
    char cabecalho[TAMANHO];
    fscanf(arquivo, "%[^\n]\n",cabecalho);

    char nome[MAX_NOME], sobrenome[MAX_SOBRENOME];

    while (fscanf(arquivo, "%[^,],%[^\n]\n",nome,sobrenome) == 2) {
        // fscanf retorna a quantidade de % q foi possivel ler
            printf("%-15s %-15s\n",nome, sobrenome);
            contador ++;
        }

    if(contador == 0){
        printf("Nenhum registro achado");
    }
    else printf("Registros %d,contador");
}

void exibirMenu(void){
    
}