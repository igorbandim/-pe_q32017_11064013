
#include <stdio.h>
#include <math.h>
#include <complex.h>

double sqrtdelta(double a, double b, double c )
{
  double result;
  result = (b*b)-4.0*a*c;
  result=sqrt(result);
  return result;
}

double raiz1(double a, double b, double c){
   double result;
   result= (b*(-1.0)-sqrtdelta(a,b,c))/(2.0*a);
   return result;
}

double raiz2(double a, double b, double c){
   double result;
   result= (b*(-1.0) + sqrtdelta(a,b,c))/(2*a);
   return result;
}



int main()
{
   double a,b,c,result[2];  
   scanf("%lf %lf %lf",&a,&b,&c);
   result[0]=raiz1(a,b,c);
   result[1]=raiz2(a,b,c);
   printf("%.2f %.3f\n",result[0],result[1]);
   return 0;
}