/*5 - Faça um procedimento que recebe por parâmetro o tempo de duração de
uma fábrica expressa em segundos e imprima esse tempo em horas, minutos
e segundos.*/
#include <stdio.h>

void tempo(float s)
{
 float h;
 float m;
 float seg;
 int temp; 
 if(s>=3600)
 {
  h=s/3600;
  printf("horas = %d \n",(int)h);  
 }
  temp=h;
  m=(h-temp)*60;
  printf("minutos = %d \n",(int)m);
  temp=m;
  seg=(m-temp)*60; 
  printf("segudos = %d \n",(int)seg); 
}
int main()
{
tempo(4000);
}