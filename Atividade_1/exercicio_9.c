#include <stdio.h>

int sinal(int num)
{
  if(num<0) return -1;
  else return 1;
}

int main()
{
  int numero;
  scanf("%d",&numero);
  int valor = sinal(numero);
  printf("%d",valor);
  return 0;
}