/*Array[5]
estrutura carro
        -marca
        -modelo
        -ano 
        -cor 
usuario entra e print*/
#include <stdio.h>

int main(){
  typedef struct{
    char marca[50];
    char modelo[50];
    int ano;
    char cor[50];
  }carro;

  carro array[5];
  for(int i = 0; i<1;i++){
    scanf("%s",array[i].marca);
    scanf("%s",array[i].modelo);
    scanf("%d",&array[i].ano);
    scanf("%s",array[i].cor);
  }
  for(int i = 0; i<1;i++){
    printf("%s %s %d %s\n",array[i].marca,array[i].modelo,array[i].ano,array[i].cor);
  }
}