#include <stdio.h>

float salario (int n);
float acresc(float salario, int extra);
float decres(unsigned int salario,int faltas);

int main()
{
   int cargo,extras,faltas;
   scanf("%d %d %d",&cargo,&faltas,&extras);
   float total;
   total=salario(cargo)+acresc(salario(cargo),extras)-decres(salario(cargo),faltas);
   printf("%.0f\n",total);
   return 0;
}

float salario (int n){
  if (n==1) return 10000.0;
  if (n==2) return 8000.0;
  if (n==3) return 5000.0;
  if (n==4) return 3000.0;
  if (n==5) return 2000.0;
  else return 0;
}

float acresc(float salario, int extra){
  if (extra<=40) return ((salario/160.0)+40.0)*extra;
  else return ((salario/160)+40.0)*40;
}

float decres(unsigned int salario,int faltas){
  return (salario/20.0)*faltas;
}
