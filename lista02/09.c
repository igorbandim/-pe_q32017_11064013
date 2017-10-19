#include <stdio.h>


int potencia(int x, int y){
  if(y==0) return 1;
  if(y==1) return x;
  else return x*potencia(x,y-1); 
}
 

int main()
{
   int x,y,result;
   scanf("%d %d", &x,&y);
   result=potencia(x,y);
   printf("%d\n", result); 
   return 0;
}