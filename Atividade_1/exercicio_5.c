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
