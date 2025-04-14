/*3 - Faça uma função que receba um texto por parâmetro e escreva-o na tela 
(print), em seguida retorne “Ok”. */ 

#include <stdio.h>

char printarc(char texto[])
{
  printf ("%s",texto);
  return (printf("OK"));
}

int main()
{
  printarc("texto\n");
  return 0;
}
