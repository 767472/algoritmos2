#include <stdio.h>

int main()
{
  int a=5;
  int *p;
  int *pa;
  pa=&a;
  p=pa;
  printf("valor da variavel %d\n",a);

  printf("endereço do ponteiro %p\n",&pa);
  printf("endereço da variavel atribuida para o ponteiro %p\n",pa);
  printf("valor da variavel impressa pelo ponteiro %d\n",*pa);

  printf("endereço da variavel %d\n",&a);

  printf("endereço de variavel que foi atribuida ao ponteiro %p\n",p);
  printf("valor de variavel que foi atribuida ao ponteiro %d\n",*p);
  return 0;
}