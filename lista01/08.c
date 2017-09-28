#include <stdio.h>

int main()
{
   int f1,f2,f3,x;
   f1=0;
   f2=1;
   printf("Digite um numero x inteiro positivo maior ou igual a 1: ");
   scanf("%d", &x);
   if (x==1) {
       printf("O primeiro numeros da sequencia de Fibonacci é 1 ");   
   }
   if ( x==2 ) {
       printf("Os dois primeiros numeros da sequencia de Fibonacci são 0 e 1");   
   }
   if ( x>2 ) {
      printf("Os %d primeiros numeros da sequencia de Fibonacci são 0, 1",x); 
      repita:
      f3=f2+f1;
      f1=f2;
      f2=f3;
      x=x-1;
      printf(", %d",f3);
      if (x>2){
          goto repita;
      }
     
   }
   
   
   

   return 0;
}