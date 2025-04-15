#include <stdio.h>
char* triangulo(int x, int y, int z)
{
 if(x<y+z&&y<x+z&&z<y+x)
 {
  if(x!=y&&x!=z&&y!=z) 
    return "Triangulo Escaleno";
  else if(x==y&&x==z) 
    return "Triangulo Equilatero";  
  else if((x==y&&x!=z)||(z==y&&z!=x))
    return "Triângulo Isosceles";  
 }
 else return "Não é um triangulo";
}
int main()
{
  int a, b, c;
  printf("Digite os 3 lados do triangulo: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("%s\n", triangulo(a, b, c));
  return 0;
}