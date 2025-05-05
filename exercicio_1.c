#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x=0,y=0;
  int matriz_geral[x][y];  
  int matriz_resul[x][y];  
  printf("digite o valor da matriz[x,y]");
  scanf("%d %d",&x,&y);
  for(int i=0;i<x;i++)
  {
    for(int l=0;l<y;l++)
    {
      matriz_geral[i][l]=rand() %255;
      printf("%d ",matriz_geral[i][l]);
    }
    printf("\n");  
  }
  for(int i=0;i<5;i++)
  {
    for(int l=0;l<5;l++)
    {
     
    }
    printf("\n");  
  }
}