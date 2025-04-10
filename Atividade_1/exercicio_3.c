/*3 - Faça uma função que receba um texto por parâmetro e escreva-o na tela 
(print), em seguida retorne “Ok”. */ 

#include <stdio.h>

char printar(char texto[])
{
  printf ("%s",texto);
  return (printf("OK"));
}

int main()
{
  printar("texto\n");
  return 0;
}
