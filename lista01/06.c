#include <stdio.h>

int main()
{
   int fat,num;
   fat=1;
   printf("Digite um numero: ");
   scanf("%d", &num);
   repita:
   fat=fat*num;
   num=num-1;
   if ( num!=0 ) {
         goto repita;
   }
   printf("O fatorial do número é: %d ", fat);
   
   

   return 0;
}