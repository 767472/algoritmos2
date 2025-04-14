#include <stdio.h>
#include "funcao.h"

int main() {
    int opcao;
    do {
        printf("\n=== PAINEL DAS FUNÇÕES ===\n");
        printf("1 - Exercicio 1 - \"Printar Oi sem parametros\"\n");
        printf("2 - Exercicio 2 - \"Recebe um texto e imprime\"\n");
        printf("3 - Exercicio 3 - \"Recebe um texto e imprime e retorna OK\"\n");
        printf("4 - Exercicio 4 - \"Calculo de Baskara\"\n");
        printf("5 - Exercicio 5 - \"Segundos para Horas, Minutos e Segundos\"\n");
        printf("6 - Exercicio 6 - \"Idade em dias\"\n");
        printf("7 - Exercicio 7 - \"Verifica se o numero é perfeito\"\n");
        printf("8 - Exercicio 8 - \"Categorias de Nadador\"\n");
        printf("9 - Exercicio 9 - \"Verifica se o numero é positivo ou negativo\"\n");
        printf("10 - Exercicio 10 - \"Verifica se o numero é par ou impar\"\n");
        printf("11 - Exercicio 11 - \"Media de nota que retorna Conceito\"\n");
        printf("12 - Exercicio 12 - \"Ordem crescente dos Numeros\"\n");
        printf("13 - Exercicio 13 - \"Verificacao de tipo de triangulos\"\n");
        printf("14 - Exercicio 14 - \"Média aritmética de N numeros \"\n");
        printf("15 - Exercicio 15 - \"Potencia de X por Z\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printar1();
                break;
            case 2: {
                char texto[100];
                printf("Digite o texto: ");
                scanf(" %[^\n]", texto);
                printar2(texto);
                break;
            }
            case 3: {
                char texto[100];
                printf("Digite o texto: ");
                scanf(" %[^\n]", texto);
                printarc(texto);
                break;
            }
            case 4: {
                float a, b, c;
                printf("Digite a, b e c: ");
                scanf("%f %f %f", &a, &b, &c);
                baskara(a, b, c);
                break;
            }
            case 5: {
                double segundos;
                printf("Digite os segundos: ");
                scanf("%lf", &segundos);
                tempo(segundos);
                break;
            }
            case 6: {
                int ano, mes, dia;
                printf("Digite anos, meses e dias: ");
                scanf("%d %d %d", &ano, &mes, &dia);
                printf("Idade em dias: %d\n", idade(ano, mes, dia));
                break;
            }
            case 7: {
                int num;
                printf("Digite o numero: ");
                scanf("%d", &num);
                if (perfeito(num)) printf("Eh perfeito\n");
                else printf("Nao eh perfeito\n");
                break;
            }
            case 8: {
                int idadeN;
                printf("Digite a idade: ");
                scanf("%d", &idadeN);
                const char* categoria=nadador(idadeN);
                printf("Idade: %d, Categoria: %s\n", idadeN, categoria);
                break;
            }
            case 9: {
                int num;
                printf("Digite o numero: ");
                scanf("%d", &num);
                if(sinal(num)) printf("O numero %d é positivo, saida:%d",num,sinal(num));
                else printf("O numero %d é negativo, saida:%d",num,sinal(num));
                break;
            }
            case 10: {
                int num;
                printf("Digite o numero: ");
                scanf("%d", &num);
                if (poui(num)) printf("O numero %d é Par\n",num);
                else printf("O numero %d é Impar\n",num);
                break;
            }
            case 11: {
                float n;
                printf("Digite a nota: ");
                scanf("%f", &n);
                printf("Conceito: %c\n", nota(n));
                break;
            }
            case 12: {
                int a, b, c;
                printf("Digite tres numeros: ");
                scanf("%d %d %d", &a, &b, &c);
                ordem(a, b, c);
                break;
            }
            case 13: 
            {
                int a,b,c;
                printf("Digite o Primeiro Lado:\n");
                scanf("%d",&a);
                printf("Digite o Segundo Lado:\n");
                scanf("%d",&b);
                printf("Digite o Terceiro Lado:\n");
                scanf("%d",&c);
                const char* t = triangulo(a,b,c);
                printf("%s\n", t);
                break;
            }
            case 14: {
                printf("Digite os numeros (0 para parar):\n");
                printf("Media: %d\n", media());
                break;
            }
            case 15: {
                int x, z;
                printf("Digite base e expoente: ");
                scanf("%d %d", &x, &z);
                printf("Resultado: %d\n", potencia(x, z));
                break;
            }
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }

    } while(opcao != 0);

    return 0;
}
