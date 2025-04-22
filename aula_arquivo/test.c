#include "stdio.h"

int main()
{
  FILE *arquivo;
  arquivo = fopen("text.txt", "w");
  fprintf(arquivo, "ola");
  fclose(arquivo);
}