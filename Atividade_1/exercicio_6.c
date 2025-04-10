/*6 - Faça uma função que recebe a idade de uma pessoa em anos, meses e dias 
e retorna essa idade expressa em dias.*/

#include <stdio.h>

int idade(int ano,int mes, int dia) 
{
  int idade = (ano*365)+(mes*30)+(dia);
}
int main()
{
  printf("%d dias",idade(18,4,21));
}

